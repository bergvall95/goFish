// Player.cpp written by Alex and Naris
// 11/5/18
#include <iostream>
#include <cstdlib>
#include "deck.h"
#include "card.h"
#include "player.h"


void player::addCard(card c) { //adds a card to the hand
    myHand.push_back(c);

}

void player::bookCards(card c1, card c2){
    player::myBook.push_back(player::removeCardFromHand(c1););
    player::myBook.push_back(player::removeCardFromHand(c2););
}

//OPTIONAL
// comment out if you decide to not use it
//this function will check a players hand for a pair.
//If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

bool player::checkHandForBook(card &c1, card &c2){
    if (c1.getRank()==c2.getRank()){
        return (true);
    }
    else{return (false);}
}

//OPTIONAL
// comment out if you decide to not use it
//Does the player have a card with the same rank as c in her hand?
bool player::rankInHand(card c) const{
    vector<card>::const_iterator iter;

    for(iter=myHand.begin(); iter!=myHand.end(); iter++){
        if((*iter).getRank() ==c.getRank()){ // if the rank of the card in the hand is equal to the rank of the card given to the function, return true
            return true;
        }
    }
    return false;
}

//uses some strategy to choose one card from the player's
//hand so they can say "Do you have a 4?"
card player::chooseCardFromHand() const{

}

//Does the player have the card c in her hand?
bool player::cardInHand(card c) const{

}

//Remove the card c from the hand and return it to the caller
card player::removeCardFromHand(card c){
    vector<card>::const_iterator iter;

    for(iter=myHand.cbegin();iter!=myHand.cend(); iter++){
        if((*iter).getRank() == c.getRank()){ // if the rank of the card in the hand is equal to the rank of the card given to the function, return true
            myHand.erase(iter);
        }
    }
}

string player::showHand() const{

}
string player::showBooks() const{

}

int player::getHandSize() const{
    return(myHand.size());
}

int  player::getBookSize() const{
    return(myBook.size());
}
//OPTIONAL
// comment out if you decide to not use it
//this function will check a players hand for a pair.
//If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

bool player::checkHandForPair(card &c1, card &c2){

}

//OPTIONAL
// comment out if you decide to not use it
//Does the player have a card with the same rank as c in her hand?
//e.g. will return true if the player has a 7d and the parameter is 7c

bool player::sameRankInHand(card c) const{

}
