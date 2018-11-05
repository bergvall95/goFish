// FILE:  player.h
// written by Roger Priebe
// 1/22/08 (revised 9/2/08)
// This class represents a player in a card game that takes "tricks"
// The "Books" represent a container for holding tricks

#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <string>
#include <vector>


#include "card.h"
using namespace std;


class player
{
public:
    player();

    player(string name) {
        myName = name;
    }

    string getName() const {
        return myName;
    }

    void addCard(card c);  //adds a card to the hand
    void bookCards(card c1, card c2);

    //OPTIONAL
    // comment out if you decide to not use it
    //this function will check a players hand for a pair.
    //If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

    bool checkHandForBook(card &c1, card &c2);

    //OPTIONAL
    // comment out if you decide to not use it
    //Does the player have a card with the same rank as c in her hand?
    bool rankInHand(card c) const;

    //uses some strategy to choose one card from the player's
    //hand so they can say "Do you have a 4?"
    card chooseCardFromHand() const;

    //Does the player have the card c in her hand?
    bool cardInHand(card c) const;

    //Remove the card c from the hand and return it to the caller
    card removeCardFromHand(card c);

    string showHand() const;
    string showBooks() const;

    int getHandSize() const;
    int getBookSize() const;

    //OPTIONAL
    // comment out if you decide to not use it
    //this function will check a players hand for a pair.
    //If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

    bool checkHandForPair(card &c1, card &c2);

    //OPTIONAL
    // comment out if you decide to not use it
    //Does the player have a card with the same rank as c in her hand?
    //e.g. will return true if the player has a 7d and the parameter is 7c

    bool sameRankInHand(card c) const;


private:

    vector <card> myHand;
    vector <card> myBook;

    string myName;

};


#endif