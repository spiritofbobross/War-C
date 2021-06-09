//
// Created by Mathm on 6/9/2021.
//

#ifndef WAR_RANK_H
#define WAR_RANK_H
#include <string>
#include <utility>

using namespace std;

class Rank {
private:
    string display;
    int value;
public:
    Rank(string display, int value) {
        this->display = move(display);
        this->value = value;
    }

    int getValue() const { return value; }

    string toString() { return display; }
};


#endif //WAR_RANK_H
