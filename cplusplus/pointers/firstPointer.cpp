#include <iostream>

int main() {
    int firstvalue, secondvalue; // Declare two int type variables
    int * mypointer; // Declare pointer to int (NOT dereference operator)

    mypointer = &firstvalue; // Address of operator getting address from firstvalue
    *mypointer = 10; // Dereference operator setting value in given address

    mypointer = &secondvalue; // Assign address
    *mypointer = 20; // Set value in earlier assigned address

    std::cout << "firstvalue is " << firstvalue << std::endl;
    std::cout << "secondvalue is " << secondvalue << std::endl;

    return 0;
}

/* Output:
 * firstvalue is 10
 * secondvalue is 20
 *
 * Declaring a variable means allocating a memory address
 * Address of operator (&) gets the memory address of a variable
 * pAddressOfVar = &var -- &var returns the allocated memory address
 * pValueOfVar = *var -- *var returns the value stored in the allocated memory address
 * So *var = var
 */
