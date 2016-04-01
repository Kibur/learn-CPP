#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <cmath>
#include <fstream>

using std::cout;
using std::cin;

bool is_prime(const long long &n) {
    for (long long s = sqrt(n), i = 2; i <= s; i++) if (n % i == 0) return false;
    return true;
}

void calcDivisors(const long long &n, std::set<long long> &results) {
    for (long long i = 2; i <= n; i++) if (n % i == 0) results.insert(i);
}

int main() {
    std::string strInput;
    long long nmbr, highest;
    std::set<long long> results;
    std::set<long long>::key_compare resultsComp = results.key_comp();

    do {
        cout << "Check if prime number: ";
        getline(cin, strInput);
        std::stringstream(strInput) >> nmbr;
    } while (!(nmbr > 1));

    if (!is_prime(nmbr)) calcDivisors(nmbr, results);

    if (!results.empty()) {
        cout << "Input number is not a prime number\n";

        highest = *results.rbegin();
        std::set<long long>::iterator it = results.begin();
        std::ofstream ofs;

        ofs.open("divisors.txt", std::ofstream::out | std::ofstream::trunc);
        ofs << "Number: " << nmbr << "\n";

        do ofs << *it << ", ";
        while (resultsComp(*(++it), highest));

        ofs.close();

        cout << "File \"divisors.txt\" has been created.";
    }
    else cout << "\nInput number is a prime number";

    cout << "\n";

    return 0;
}
