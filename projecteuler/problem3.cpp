#include <iostream>
#include <cmath>

// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

bool is_prime(const long long &n) {
    for (long s = sqrt(n), i = 2; i <= s; i++) if (n % i == 0) return false;
    return true;
}

long largestPrimeFactorOf(const long long &n) {
    long r;

    if (!is_prime(n))
        for (long s = sqrt(n), i = 2; i <= s; i++)
            if (is_prime(i) && n % i == 0) r = i;

    return r;
}

int main() {
    std::cout << "The largest prime factor is "
        << largestPrimeFactorOf(600851475143);

    return 0;
}
