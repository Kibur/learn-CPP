#include <iostream>
#include <cmath>

/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
* Find the sum of all the primes below two million.
*/

bool is_prime(const long &n) {
    for (long s = sqrt(n), i = 2; i <= s; i++) if (n % i == 0) return false;
    return true;
}

long sumPrimesBelow(const long &n) {
    long r = 2;
    
    for (long i = 3; i < n; i++) if (is_prime(i)) r += i;
    
    return r;
}

int main() {
    std::cout << "Sum of primes below two million is " << sumPrimesBelow(2000000);
    
    return 0;
}
