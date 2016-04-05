#include <iostream>
#include <cmath>

/* By listing the first six prime numbers: 2, 3, 5, 7, 11 and 13,
 * we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 */

bool is_prime(const int &n) {
    for (long s = sqrt(n), i = 2; i <= s; i++) if (n % i == 0) return false;
    return true;
}

int primeNumberAtPosition(const int &pos) {
    int i = 2, c = 0;
    
    do {
    	if (is_prime(i)) c++;
    	i++;
    } while (c < pos);
    
    return i - 1;
}

int main() {
    std::cout << "The 10 001st prime number is " << primeNumberAtPosition(10001);
    
    return 0;
}
