#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;

void fibonacci(const int &n) {
    cout << "0 1 1 ";

    int fib[n];
    fib[0] = 0;
    fib[1] = fib[2] = 1;

    for (int i = 3; i < n; i++) {
        fib[i] = fib[i - 2] + fib[i - 1];
        cout << fib[i] << " ";
    }
}

int main() {
    std::string strInput;
    int n;

    do {
        cout << "How many elements (>5): ";
        getline(cin, strInput);
        std::stringstream(strInput) >> n;
    } while (!(n >= 5));

    fibonacci(n);

    return 0;
}
