#include <iostream>

int main() {
    int numbers[5]; // Declare an array of int with max size of 5 elements of type int
    int * p; // Declare point to int

    // Address of numbers = &numbers[0] and set value 10 to current address
    p = numbers; *p = 10;

    // Increase by 1 the value of the address and set value 20
    p++; *p = 20;

    // Address of 3th element of the array and set value 30
    p = &numbers[2]; *p = 30;

    // Address of 0+3 = 4th element of the array and set value 40
    p = numbers + 3; *p = 40;

    // Addresss of numbers = 1st element of the array and set value 50 to (current address +4)
    p = numbers; *(p+4) = 50;

    for (int i = 0; i < 5; i++) std::cout << numbers[i] << ", ";

    std::cout << std::endl;

    return 0;
}

/* Output:
 * 10, 20, 30, 40, 50,
 */
