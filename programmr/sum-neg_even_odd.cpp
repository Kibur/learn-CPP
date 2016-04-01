#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num, sumneg, sumeven, sumodd;
    sumneg = sumeven = sumodd = 0;

    // Pointers (because it's fun ;))
    int * p0, * p1, * p2, * p3;
    p0 = &num;
    p1 = &sumneg;
    p2 = &sumeven;
    p3 = &sumodd;

    cout << "Address Of num: " << p0 << endl;
    cout << "Address Of sumneg: " << p1 << endl;
    cout << "Address Of sumeven: " << p2 << endl;
    cout << "Address Of sumodd: " << p3 << endl;

    cout << "\nEnter a number (0 to terminate):" << endl;

    do {
        cin >> *p0;

        if (*p0 < 0) *p1 += *p0;
        else if (*p0 > 0) {
            if (*p0 % 2 == 0) *p2 += *p0;
            else *p3 += *p0;
        }
    } while (*p0 != 0);

    cout << "Output:" << endl;
    cout << "Sum of negative numbers = " << *p1 << endl;
    cout << "Sum of positive even numbers = " << *p2 << endl;
    cout << "Sum of positive odd numbers = " << *p3 << endl;

    return 0;
}
