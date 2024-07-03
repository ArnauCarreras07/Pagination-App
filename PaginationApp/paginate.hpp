#ifndef PAGINATE_H
#define PAGINATE_H

#include <iostream>
#include <fstream>
#include <string>

#define MAXCHARS 80
#define MAXLINES 25

using namespace std;

class Paginate
{
public:
 
    //Input: Name of the input file to paginate: string, name of
    //       ouptut file to save the pagination: string.
    //Output: Returns 1 if either of the files are not able to be
    //        opened, 0 if all the operations are done without
    //        any error.
    //Action: Paginates the input file filename with lines of
    //        length at most MAXCHARS and MAXLINES per page with
    //        page separators and page number. The pagination is
    //        saved in the output file.
    int paginateSourceToDestination(string filename, string output);

private:

    //Input: Outpout file stream: ofstream, number of page: Integer
    //Output: None
    //Action: Insert a page separator in file with page_number
    //        in the right margin of the page
    void createPageSeparator(ofstream &file, int page_number);
};

#endif // PAGINATE_H
