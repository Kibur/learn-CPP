#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

/* A palindromic number reads the same both ways.
* The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
* Find the largest palindrome made from the product of two 3-digit numbers.
*/

std::string palindromeProduct(const int &k) {
    std::string strNorm, strRev;
    const int max = pow(10, k) - 1;
    int j = max;

    do {
        for (int i = max; i > 0; i--) {
            strNorm = strRev = std::to_string(i * j);
            std::reverse(strRev.begin(), strRev.end());

            if (i % 10 == 0) break;
            if (strNorm.compare(strRev) == 0)
                return strNorm + " = " + std::to_string(i) + " x " + std::to_string(j);
        }

        j--;
    } while (j > 0);
}

int main() {
    std::cout << "Largest palindrome made from the product of two 3-digit numbers is "
        << palindromeProduct(3);

    return 0;
}
