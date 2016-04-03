#include <iostream>

// Find the sum of all the multiples of 3 or 5 below 1000.

int sumOfMultiples(const int &n) {
    if (n > 0) {
        if (n % 3 == 0 || n % 5 == 0) {
            std::cout << n << ", ";
            return n + sumOfMultiples(n - 1);
        }
        else return sumOfMultiples(n - 1);
    }
}

int main() {
    std::cout << "The sum of these multiples is " << sumOfMultiples(999);

    return 0;
}
