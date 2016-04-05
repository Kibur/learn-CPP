#include <iostream>

/* 2520 is the smallest number that can be divided by each of the numbers
* from 1 to 10 without any remainder.
* What is the smallest positive number that is 'evenly divisible' by all of
* the numbers from 1 to 20?
*/

int gcd(const int &a, const int &b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int smallestEvenlyDivisibleNumber(const int &n) {
    int r = 2;
    
    for (int i = 3; i < n; i++) r = r * i / gcd(r, i);
    return r;
}

int main() {
    std::cout << "The smallest evenly divisible positive number is "
        << smallestEvenlyDivisibleNumber(20);

    return 0;
}
