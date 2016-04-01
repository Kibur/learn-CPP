#include <iostream>

int main() {
    // Declare and initialize two int type variables
    int firstvalue = 5, secondvalue = 15;

    // Declaring pointers
    // Important: to declare pointers you must use (*) sign PER pointer
    // NOT int* p1, p2 because p2 will be of type int and NOT pointer int
    // int * p1, * p2
    // int *p1, *p2
    int * p1, * p2;

    p1 = &firstvalue; // p1 = address of firstvalue
    p2 = &secondvalue; // p2 = address of secondvalue

    *p1 = 30; // value pointed by p1 = 30
    *p2 = *p1; // value pointed by p2 = value pointed by p1

    p1 = p2; // p1 = p2 (value of pointer is copied)

    *p1 = 40; // value pointed to by p1 = 40

    std::cout << "firstvalue is " << firstvalue << std::endl;
    std::cout << "secondvalue is " << secondvalue << std::endl;

    return 0;
}

/* Output:
 * firstvalue is 30
 * secondvalue is 40
 *
 * Note: p1 = p2 -- means that the memory address of p2 is copied in p1
 */
