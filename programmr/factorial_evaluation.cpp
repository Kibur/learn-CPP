#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;

long factorial(const long &n) {
    if (n == 0) return 1;
    for (long i = n; i > 1; i--) return n * factorial(i - 1);
}

int main() {
    std::string strInput;
    long n;

    cout << "Enter the value of n: ";
    getline(cin, strInput);
    std::stringstream(strInput) >> n;

    cout << "\nValue of factorial is: " << factorial(n);
}
