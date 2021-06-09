//
// Created by Mathm on 6/9/2021.
//

#ifndef WAR_CARD_H
#define WAR_CARD_H


#include "Rank.h"
#include "Suit.h"

class Card {
private:
    bool faceUp;
    Rank rank;
    Suit suit;
public:
    Card(Rank rank, Suit suit) {
        this->rank = rank;
        this->suit = suit;
        this->faceUp = false;
    }

    void setFaceUp() { faceUp = true; }

    void setFaceDown() { faceUp = false; }

    bool isFaceUp() { return faceUp; }

    bool beats(const Card& other) { return other.rank.getValue() < this->rank.getValue(); }

    string toString() {
        if (faceUp)
            return (rank.toString() + suit.toString() + "(U)");
        else
            return (rank.toString() + suit.toString() + "(D)");
    }
};


#endif //WAR_CARD_H
