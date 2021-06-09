//
// Created by Mathm on 6/9/2021.
//

#ifndef WAR_SUIT_H
#define WAR_SUIT_H
#include <string>
#include <utility>

using namespace std;

class Suit {
private:
    string display;
public:
    explicit Suit(string display) { this->display = move(display); }

    string toString() { return display; }
};

#endif //WAR_SUIT_H
