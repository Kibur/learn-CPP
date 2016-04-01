#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;

struct movies_t {
    std::string title;
    int year;
} films[3];

void printMovie(movies_t);

int main() {
    std::string mystr;
    int n;

    for (n = 0; n < 3; n++) {
        cout << "Enter title: ";
        getline(cin, films[n].title);

        cout << "Enter year: ";
        getline(cin, mystr);
        std::stringstream(mystr) >> films[n].year;
    }

    cout << endl << "You have entered these movies: " << endl;

    for (n = 0; n < 3; n++)
        printMovie(films[n]);

    return 0;
}

void printMovie(movies_t movie) {
    cout << movie.title;
    cout << " (" << movie.year << ")" << endl;
}
