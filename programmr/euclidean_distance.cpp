#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using std::cout;
using std::cin;

struct Point {
    double x;
    double y;
};

double euclidean_distance(const Point &A, const Point &B) {
    return sqrt(pow(A.x - B.x, 2.0) + pow(A.y - B.y, 2.0));
}

void parseInput(double &k, std::string &str) {
    getline(cin, str);
    std::stringstream(str) >> k;
}

int main() {
    std::string strInput;
    Point A, B;

    cout << "Enter point A(x, y)";
    cout << "\nEnter x: "; parseInput(A.x, strInput);
    cout << "\nEnter y: "; parseInput(A.y, strInput);
    cout << "\n\nEnter point B(x, y)";
    cout << "\nEnter x: "; parseInput(B.x, strInput);
    cout << "\nEnter y: "; parseInput(B.y, strInput);
    cout << "\n\nDistance: " << euclidean_distance(A, B);

    return 0;
}
