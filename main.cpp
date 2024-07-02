#include "paginate.hpp"

using namespace std;

int main() {
    string filename = "././document.txt";
    string output = "output.txt";
    Paginate p = Paginate();
    p.paginateSourceToDestination(filename, output);
}