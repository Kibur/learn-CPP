#include <cstdlib>
#include <time.h>
#include "rps.h"

std::string RPS::getSelected() {
    return this->choice;
}

RPS::RPS() {
    time_t seconds;
    srand((unsigned int)time(&seconds));

    this->choice = this->CHOICES[rand() % 3];
}

RPS::RPS(const std::string &c) {
    this->choice = c;
}

// Destructor
RPS::~RPS() {} // Delete object

int RPS::combinations(const std::string &a, const std::string &b) {
    if ((a == this->CHOICES[0]) && (b == this->CHOICES[2])
        || (a == this->CHOICES[1]) && (b == this->CHOICES[0])
        || (a == this->CHOICES[2]) && (b == this->CHOICES[1]))
        return 1;
    else if ((b == this->CHOICES[0]) && (a == this->CHOICES[2])
        || (b == this->CHOICES[1]) && (a == this->CHOICES[0])
        || (b == this->CHOICES[2]) && (a == this->CHOICES[1]))
        return 0;

    return -1;
}

std::string RPS::compare(RPS* b) {
    std::string yours = this->getSelected();
    std::string theirs = b->getSelected();
    int win = combinations(yours, theirs);

    if (win == 1) return "Congratulations, you win!";
    else if (win == 0) return "HA, gay!";
    else return "Cool cool, cool ...";
}