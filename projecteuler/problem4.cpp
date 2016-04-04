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
    const int MAX = pow(10, k) - 1;
    int j = MAX;

    do {
        for (int i = MAX; i > 0; i--) {
            strNorm = strRev = std::to_string(i * j);
            std::reverse(strRev.begin(), strRev.end());

            if (strNorm.compare(strRev) == 0)
                return strNorm + " = " + std::to_string(i) + " x " + std::to_string(j);
            if (i % 10 == 0) break;
        }

        j--;
    } while (j > 0);
}

int main() {
    std::cout << "Largest palindrome made from the product of two 3-digit numbers is "
        << palindromeProduct(3);

    return 0;
}
