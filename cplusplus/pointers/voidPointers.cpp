#include <iostream>

// Function declaration
// Functions cannot be called before they are declared.
// That is why functions were always defined before the main function.
// Not declaring a function before the main function will break the rule,
// and thus won't compile
void increase(void*, int);

int main() {
    char a = 'x';
    int b = 1602;

    increase(&a, sizeof(a));
    increase(&b, sizeof(b));

    std::cout << a << ", " << b << std::endl;

    return 0;
}

// The ability to point to any data type.
// In exchange, they have a great limitation:
// data pointed to by them cannot be directly dereferenced
// (which is logical, since we have no type to dereference to),
// and for that reason, any address in a void pointer needs to be transformed
// into some other pointer type that points to a concrete data type
// before being dereferenced.
void increase(void *data, int psize) {
    if (psize == sizeof(char)) {
        char * pChar;
        pChar = (char*) data; // Transforming the void pointer
        ++(*pChar);
    }
    else if (psize == sizeof(int)) {
        int * pInt;
        pInt = (int*) data; // Transforming the void pointer
        ++(*pInt);
    }
}

/* Output:
 * y, 1603
 */
