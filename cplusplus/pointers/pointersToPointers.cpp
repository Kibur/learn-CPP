#include <iostream>

using std::cout;
using std::endl;

int main() {
    char a;
    char * b;
    char ** c;

    a = 'z';
    b = &a; // Address of char a
    c = &b; // Address of pointer b

    cout << "c of type char** has value of " << c << endl;
    cout << "*c of type char* has value of " << *c << endl;
    cout << "**c of type char has value of " << **c << endl;

    return 0;
}

/* Output:
 * c of type char** has value of <ValueOfPointer/c> = address of pointer b
 * *c of type char* has value of <ValueOfPointer/b> = address of char a
 * **c of type char has value of <ValueOfChar/a> = 'z'
 */
