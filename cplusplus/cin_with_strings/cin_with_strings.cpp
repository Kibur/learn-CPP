#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string msg;

    cout << "What's your name? ";
    getline(cin, msg); // same as cin >> msg

    cout << "Hello, " << msg << "." << endl;
    cout << "What is your favorite food? ";
    getline(cin, msg); // same as cin >> msg

    cout << "I like " << msg << " too!" << endl;

    return 0;
}
