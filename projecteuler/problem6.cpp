#include <iostream>
#include <cmath>
#include <string>

/* The sum of the squares of the first ten natural numbers is,
* 1² + 2² + ... + 10² = 385
* The square of the sum of the first ten natural numbers is,
* (1 + 2 + ... + 10)² = 55² = 3025
* Hence the difference between the sum of the squares of the first ten
* natural numbers and the square of the sum is 3025 - 385 = 2640.
* Find the difference between the sum of the squares of the first one hundred
* natural numbers and the square of the sum.
*/

int sumOfTheSquaresOf(const int &n) {
    if (n > 0) return pow(n, 2.0) + sumOfTheSquaresOf(n - 1);
}

int sumOf(const int &n) {
    if (n > 0) return n + sumOf(n - 1);
}

int squareOfTheSumOf(const int &n) {
    return pow(sumOf(n), 2.0);
}

std::string difference(const int &n) {
    std::string qfts = std::to_string(squareOfTheSumOf(n)),
        sots = std::to_string(sumOfTheSquaresOf(n)),
        diff = std::to_string(squareOfTheSumOf(n) - sumOfTheSquaresOf(n));
    return qfts + " - " + sots + " = " + diff;
}

int main() {
    std::cout << "The difference between the sum of the squares is "
        << difference(100);
    
    return 0;
}
