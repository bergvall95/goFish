//
// Created by Naris on 11/1/2018.
//

// Player.cpp written by Alex and Naris
// 11/5/18
#include <iostream>
#include <cstdlib>
#include "deck.h"
#include "card.h"
#include "player.h"
#include <ctime>
using namespace std;


void Player::addCard(Card c) { //adds a card to the hand
    myHand.push_back(c);

}

void Player::bookCards(Card c1, Card c2){
    Player::myBook.push_back(Player::removeCardFromHand(c1));
    Player::myBook.push_back(Player::removeCardFromHand(c2));
}

//OPTIONAL
// comment out if you decide to not use it
//this function will check a players hand for a pair.
//If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

/*bool Player::checkHandForBook(Card &c1, Card &c2){
    if (c1.getRank()==c2.getRank()){
        return (true);
    }
    else{return (false);}
}*/

//OPTIONAL
// comment out if you decide to not use it
//Does the player have a card with the same rank as c in her hand?
/*bool Player::rankInHand(Card c) const{
    vector<Card>::const_iterator iter;

    for(iter=myHand.begin(); iter!=myHand.end(); iter++){
        if((*iter).getRank() ==c.getRank()){ // if the rank of the card in the hand is equal to the rank of the card given to the function, return true
            return true;
        }
    }
    return false;
}*/

//uses some strategy to choose one card from the player's
//hand so they can say "Do you have a 4?"
Card Player::chooseCardFromHand() const{
    srand(time(NULL));
    int x = rand() % getHandSize();
    return myHand.at(x);

}

//Does the player have the card c in her hand?
bool Player::cardInHand(Card c) const{
    vector<Card>::const_iterator iter;

    for(iter = myHand.cbegin();iter != myHand.cend(); iter++){
        if((*iter).getRank() == c.getRank()){ // if the rank of the card in the hand is equal to the rank of the card given to the function, return true
            return true;
        }
    }
    return false;
}

//Remove the card c from the hand and return it to the caller
Card Player::removeCardFromHand(Card c){
    vector<Card>::const_iterator iter;

    for(iter = myHand.cbegin();iter != myHand.cend(); iter++){
        if((*iter).getRank() == c.getRank()){ // if the rank of the card in the hand is equal to the rank of the card given to the function, return true
            Card c = (*iter);
            myHand.erase(iter);
            return c;
        }
    }
}

string Player::showHand() const{
    string x;
    for(int i = 0; i < myHand.size(); i++){
        x = x + myHand.at(i).toString() + " ";
    }
    return x;

}
string Player::showBooks() const{
    string x;
    for(int i = 0; i < myBook.size(); i++){
        x = x + myBook.at(i).toString() + " ";
    }
    return x;
}

int Player::getHandSize() const{
    return myHand.size();
}

int  Player::getBookSize() const{
    return myBook.size();
}
//OPTIONAL
// comment out if you decide to not use it
//this function will check a players hand for a pair.
//If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

bool Player::checkHandForPair(Card &c1, Card &c2){
    for(int i = 0; i < myHand.size(); i++){
        for(int j = i + 1; j < myHand.size(); j++){
            if(myHand.at(i).getRank() == myHand.at(j).getRank()){
                c1 = myHand.at(i);
                c2 = myHand.at(j);
                bookCards(c1,c2);
                return true;
            }
        }
    }
    return false;

}

//OPTIONAL
// comment out if you decide to not use it
//Does the player have a card with the same rank as c in her hand?
//e.g. will return true if the player has a 7d and the parameter is 7c

bool Player::sameRankInHand(Card c) const{
    vector<Card>::const_iterator iter;

    for(iter = myHand.begin(); iter != myHand.end(); iter++){
        if((*iter).getRank() ==c.getRank()){ // if the rank of the card in the hand is equal to the rank of the card given to the function, return true
            return true;
        }
    }
    return false;
}