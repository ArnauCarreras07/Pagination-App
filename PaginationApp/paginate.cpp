#include "paginate.hpp"

int Paginate::paginateSourceToDestination(string filename, string output) {
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

    int chars_per_line = 0;
    int lines = 1;
    int pages = 1;

    bool need_space = false;

    while (infile >> word) {
        if (chars_per_line != 0) need_space = true;
        int next_size = chars_per_line + word.length() +((need_space) ? 1: 0);
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

void Paginate::createPageSeparator(ofstream &file, int page_number) {
    string s = to_string(page_number);
    int spaces  = s.length();
    for (int i = 0; i < MAXCHARS-spaces; ++i) file << " ";
    file << s << endl;
    for (int i = 0; i < MAXCHARS; ++i) file << "-";
    file << endl << endl;
}
