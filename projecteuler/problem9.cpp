#include <iostream>
#include <cmath>

/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
* a² + b² = c²
* For example, 3² + 4² = 9 + 16 = 25 = 5².
* There exists exactly one Pythagorean triplet for which a + b + c = 1000.
* Find the product abc.
*/

bool is_square(const int &n) {
    if (n < 0) return false;
    
    int root = round(sqrt(n));
    return n == root * root;
}

bool is_perfect_square(const int &a, const int &b, const int &c) {
    int r = ((c - a) * (c - b)) / 2;
    
    return is_square(r);
}

bool is_odd(const int &n) {
    return (n % 2 != 0);
}

bool is_divisibleBy(const int &n, const int &d) {
    return (n % d == 0);
}

bool Xor(const bool &a, const bool &b) {
    return ((a && !b) || (!a && b));
}

bool Xor(const bool &a, const bool &b, const bool &c) {
    return Xor(Xor(a, b), c);
}

bool is_primitive_Pythagorean_triple(const int &a, const int &b, const int &c) {
    bool test = false;
    
    if (is_perfect_square(a, b, c))
        if (Xor(is_square(a), is_square(b), is_square(c))
        || (!is_square(a) && !is_square(b) && !is_square(c)))
            if (Xor(is_odd(a), is_odd(b)) && is_odd(c))
                if (Xor(is_divisibleBy(a, 3), is_divisibleBy(b, 3)))
                    if (Xor(is_divisibleBy(a, 4), is_divisibleBy(b, 4)))
                        if (Xor(is_divisibleBy(a, 5), is_divisibleBy(b, 5), is_divisibleBy(c, 5)))
                            if (is_divisibleBy(a * b * c, 60)) test = true;
    
    return test;
}

int productWhereSumABC(const int &s) {
    const int LEN = (s / 3) * 2;
    int a, b, c;
    a = b = c = 0;
    
    for (int m = 5; m < LEN; m++) {
        for (int n = 4; n < m; n++) {
            if (a + b + c == s && is_primitive_Pythagorean_triple(a, b, c)) break;
            
            if (is_odd(m - n)) {
                a = 2 * m * n;
                b = (m * m) - (n * n);
                c = (m * m) + (n * n);
            }
        }
    }
    
    std::cout << "A: " << a << "\n";
    std::cout << "B: " << b << "\n";
    std::cout << "C: " << c << "\n";
    
    return a * b * c;
}

int main() {
    std::cout << "Product of abc is " << productWhereSumABC(1000);
    
    return 0;
}
