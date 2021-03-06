//
// Created by Naris on 11/1/2018.
//
#include <iostream>
#include <cstdlib>
#include "deck.h"
#include "card.h"
#include "ctime"
#include <string>


Deck::Deck(void){
    myIndex = 0;
    int a = 1;
    for (int i= 0; i<13; i++){
        Card c1(a,c1.spades);
        myCards[i]= c1;
        a++;
    }
    a = 1;
    for (int i=13; i<26; i++){
        Card c2(a,c2.clubs);
        myCards[i]= c2;
        a++;
    }
    a = 1;
    for (int i= 26; i<39; i++){
        Card c3(a,c3.hearts);
        myCards[i]= c3;
        a++;
    }
    a = 1;
    for (int i=39; i<52; i++){
        Card c4(a,c4.diamonds);
        myCards[i]= c4;
        a++;
    }

    int  myIndex=0; // current card to deal

}

Card Deck:: dealCard(){

    Card x = myCards[myIndex];
    myIndex ++;
    return  x;
}

int Deck::size() const {

    return(SIZE- myIndex);
}


void Deck::shuffle() {
    Card n[size()]; // array of songs
    int count = size();// counter for number of songs
    srand(time(NULL));// randomization seeded with current time (time will never be the same)
    if(myIndex ==52) { // empty list becomes the new node
        return;
    }

    for(int i = 0; i<count; i++) {
        while (1) {
            int x = rand() % size();
            if (n[x].toString() == "As") {
                n[x] = myCards[i];
                break;
            }
        }
    }


    for(int i = 0; i<count; i++){
        myCards[i] = n[i];
    }// shuffle the deck, all 52 cards present
}





