#include <iostream>
#include "rps.h"

using std::cout;
using std::cin;

void askChoice(std::string &choice) {
    cout << "Make your choice:\n";
    cout << "R) Rock\n";
    cout << "P) Paper\n";
    cout << "S) Scissors\n";
    
    char ans;
    bool isValid = false;
    
    do {
        cout << "Type your choice ";
        cin >> ans;
        
        switch (ans) {
            case 'r':
            case 'R':
                choice = "Rock";
                isValid = true;
                break;
            case 'p':
            case 'P':
                choice = "Paper";
                isValid = true;
                break;
            case 's':
            case 'S':
                choice = "Scissors";
                isValid = true;
                break;
        }
    } while (!isValid);
}

void clearScreen() {
    cout << std::string(100, '\n');
}

int main() {
    cout << "Welcome to Rock Paper Scissors\n\n";

    std::string choice;
    askChoice(choice);

    RPS me(choice);
    RPS * cpu = new RPS();

    clearScreen();

    cout << "Your choice: " << me.getSelected() << "\n";
    cout << "CPU choice: " << cpu->getSelected() << "\n";
    cout << me.compare(cpu);

    return 0;
}
