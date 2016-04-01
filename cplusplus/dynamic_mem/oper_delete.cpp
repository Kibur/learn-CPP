#include <iostream>
#include <new>

using std::cout;
using std::cin;
using std::endl;

// You have to compile with at least C++/11
// g++ -std=c++14 oper_delete.cpp

int main() {
    int i, n;
    int * p;

    cout << "How many numbers would you like to type? ";
    cin >> i;

    p = new (std::nothrow) int[i];

    if (p == nullptr)
        cout << "Error: memory could not be allocated" << endl;
    else {
        for (n = 0; n < i; n++) {
            cout << "Enter number: ";
            cin >> p[n];
        }

        cout << "You have entered: ";

        for (n = 0; n < i; n++)
            cout << p[n] << ", ";

        cout << endl;

        delete[] p;
    }

    return 0;
}
