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

struct friends_t {
    std::string name;
    std::string email;
    movies_t favorite_movie;
};

void printFriend(friends_t);

int main() {
    std::string mystr;
    friends_t charlie, maria;
    friends_t * pFriends;
    pFriends = &charlie;

    maria.name = "Moore";
    maria.email = "maria.moore@mail.com";
    maria.favorite_movie.title = "Alien";
    maria.favorite_movie.year = 1979;

    cout << "Enter your name: ";
    getline(cin, pFriends->name);

    cout << "Enter your email: ";
    getline(cin, pFriends->email);

    cout << "Enter title: ";
    getline(cin, pFriends->favorite_movie.title);

    cout << "Enter year: ";
    getline(cin, mystr);
    std::stringstream(mystr) >> pFriends->favorite_movie.year;

    cout << endl << "Profile Maria:" << endl;
    printFriend(maria);

    cout << endl << "Profile Charlie:" << endl;
    printFriend(*pFriends);

    return 0;
}

void printFriend(friends_t profile) {
    cout << "Name: " << profile.name << endl;
    cout << "Email: " << profile.email << endl;
    cout << "Favorite movie: ";
    cout << profile.favorite_movie.title;
    cout << " (" << profile.favorite_movie.year << ")" << endl;
}
