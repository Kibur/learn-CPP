#include <cstdlib>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string strNum;
    int num, sum;

    // Pointers
    std::string * p0; p0 = &strNum;
    int * p1, * p2;
    p1 = &num; p2 = &sum;
    *p2 = 0;

    cout << "Address Of strNum: " << p0 << endl;
    cout << "Address Of num: " << p1 << endl;
    cout << "Address Of sum: " << p2 << endl;

    cout << "\nEnter the number: ";
    getline(cin, *p0);

    *p1 = std::stoi(strNum);

    if (*p1 > 0) {
        int l = strNum.size();

        for (int i = 0; i < l; i++) {
            *p2 += *p1 % 10;
            *p1 /= 10;
        }
    }

    cout << "\nSum of digits is: " << *p2 << endl;

    return 0;
}
