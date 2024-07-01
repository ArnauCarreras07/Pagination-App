#include <iostream>
#include <fstream>
#include <string>

#define MAXCHARS 80
#define MAXLINES 25

using namespace std;

void createPageSeparator(ofstream &file, int page_number) {
    string s = to_string(page_number);
    int spaces  = s.length();
    for (int i = 0; i < MAXCHARS-spaces; ++i) file << " ";
    file << s << endl;
    for (int i = 0; i < MAXCHARS; ++i) file << "-";
    file << endl << endl;
}

int main() {
    string filename = "document.txt";
    string output = "output.txt";
    
    ifstream infile(filename);
    ofstream destFile(output);

    if (not infile.is_open()) {
        cerr << "Could not open the file: " << filename << endl;
        return 1;
    }

    if (not destFile.is_open()) {
        cerr << "Could not open the file: " << output << endl;
        return 1;
    }

    string word;

    uint chars_per_line = 0;
    uint lines = 1;
    uint pages = 1;

    bool need_space = false;

    while (infile >> word) {
        if (chars_per_line != 0) need_space = true;
        int next_size = chars_per_line + word.length() +((need_space) ? 1: 0);
        cout << next_size << endl;
        if (next_size > MAXCHARS) {
            chars_per_line = 0;
            lines++;
            destFile << endl;
        }

        if (lines > MAXLINES) {
            lines = 1;
            createPageSeparator(destFile, pages);
            pages++;
        }
        if (chars_per_line > 0) destFile << " " << word;
        else destFile << word;
        chars_per_line += word.length() + ((need_space) ? 1 : 0);
        need_space = false;
    }
    destFile << endl;
    createPageSeparator(destFile, pages);

    infile.close();
    destFile.close();

    return 0;
}