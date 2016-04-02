#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using std::cout;
using std::cin;

void parseInput(int &k, std::string &str) {
    getline(cin, str);
    std::stringstream(str) >> k;
}

float semiperimeter(const int &a, const int &b, const int &c) {
    return (a + b + c) / 2;
}

float heron(const int &a, const int &b, const int &c) {
    float s = semiperimeter(a, b, c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    std::string strInput;
    int a, b, c;

    cout << "Enter the three sides";
    cout << "\nFirst side: "; parseInput(a, strInput);
    cout << "\nSecond side: "; parseInput(b, strInput);
    cout << "\nThird side: "; parseInput(c, strInput);
    cout << "\nArea is: " << heron(a, b, c);

    return 0;
}
