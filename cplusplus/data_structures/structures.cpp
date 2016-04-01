#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;

struct movies_t {
    std::string title;
    int year;
} mine, yours;

void printMovie(movies_t);

int main() {
    std::string mystr;

    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;

    cout << "Enter title: ";
    getline(cin, yours.title);

    cout << "Enter year: ";
    getline(cin, mystr);
    std::stringstream(mystr) >> yours.year;

    cout << endl << "My favorite movie is: " << endl;
    printMovie(mine);

    cout << "And yours is: " << endl;
    printMovie(yours);

    return 0;
}

void printMovie(movies_t movie) {
    cout << movie.title;
    cout << " (" << movie.year << ")" << endl;
}
