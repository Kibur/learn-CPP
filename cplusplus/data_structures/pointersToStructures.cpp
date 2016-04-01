#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;

struct movies_t {
    std::string title;
    int year;
};

int main() {
    std::string mystr;

    movies_t amovie;
    movies_t * pMovie;
    pMovie = &amovie;

    cout << "Enter title: ";
    getline(cin, pMovie->title);

    cout << "Enter year: ";
    getline(cin, mystr);
    std::stringstream(mystr) >> pMovie->year;

    cout << endl << "You have entered: " << endl;
    cout << pMovie->title;
    cout << " (" << pMovie->year << ")" << endl;

    return 0;
}
