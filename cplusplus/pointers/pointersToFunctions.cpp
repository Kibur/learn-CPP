#include <iostream>

int addition(int a, int b) {
    return a+b;
}

int subtraction(int a, int b) {
    return a-b;
}

int operation(int x, int y, int (*functocall)(int, int)) {
    int g;
    g = (*functocall)(x, y);

    return (g);
}

int main() {
    int m, n;

    // minus is a pointer to a function that two parameters of type int.
    // Initialized to point to the function subtraction.
    int (* minus)(int, int) = subtraction;

    m = operation(7, 5, addition); // 7+5=12
    n = operation(20, m, minus); // 20-12=8

    std::cout << "Value: " << n << std::endl;

    return 0;
}
