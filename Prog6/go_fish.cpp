// FILE: card_demo.cpp
// This is a small demonstration program showing how the Card and Deck classes are used.
#include <iostream>    // Provides cout and cin
#include <cstdlib>     // Provides EXIT_SUCCESS
#include "card.h"
#include "player.h"
#include "deck.h"
#include <fstream>

using namespace std;


// PROTOTYPES for functions used by this demonstration program:
void dealHand(Deck &d, Player &p, int numCards);
void ask(Player &a, Card &c);
Card handOver(Player &a, Player &b, Card &c);





int main( ) {
    int numCards = 7;

    Player p1("Fuck Physio");
    Player p2("Fuck Signal");

    Deck d;  //create a deck of cards
    d.shuffle();

    dealHand(d, p1, numCards);
    dealHand(d, p2, numCards);
    Player pt = p1;
    ofstream myfile;
    myfile.open ("results.txt");

    cout << p1.getName() << " has : " << p1.showHand() << " in hand" << endl;
    cout << p2.getName() << " has : " << p2.showHand() << " in hand" << endl;
    cout << "\n";
    myfile << p1.getName() << " has : " << p1.showHand() << " in hand" << endl;
    myfile << p2.getName() << " has : " << p2.showHand() << " in hand" << endl;
    myfile << "\n";
    while(d.size() != 0) {
        if (pt.getName().compare(p1.getName()) == 0) {
            Card a;
            Card b;
            while(p1.checkHandForPair(a,b)==true){

            };
            if(p1.getHandSize()==0){
                dealHand(d, p1, 1);
            }
            Card c1 = p1.chooseCardFromHand();
            cout << p1.getName() << " asks - Do you have a " << c1.rankString(c1.getRank()) << "?\n";
            myfile << p1.getName() << " asks - Do you have a " << c1.rankString(c1.getRank()) << "?\n";
            bool x = p2.cardInHand(c1);
            if (x == true) {
                while (p2.cardInHand(c1) == true) {
                    cout << p2.getName() << " says - Yes. I have a " << c1.rankString(c1.getRank()) << "\n";
                    myfile << p2.getName() << " says - Yes. I have a " << c1.rankString(c1.getRank()) << "\n";
                    p1.addCard(p2.removeCardFromHand(c1));
                    //if (p1.checkHandForPair(c1,c2) == true) {
                        //.bookCards(c1, c2);
                    //}
                }
                while(p1.checkHandForPair(a,b)==true){

                };
            }

            else {
                cout << p2.getName() << " says - Go Fish\n";
                myfile << p2.getName() << " says - Go Fish\n";
                dealHand(d, p1, 1);
                pt = p2;
            }
            cout << p1.getName() << " has : " << p1.showHand() << "in hand" << endl;
            cout << p1.getName() << " has : " << p1.showBooks() << "in book" << endl;
            cout << p2.getName() << " has : " << p2.showHand() << "in hand" << endl;
            cout << p2.getName() << " has : " << p2.showBooks() << "in book" << endl;
            cout << "\n";
            myfile << p1.getName() << " has : " << p1.showHand() << "in hand" << endl;
            myfile << p1.getName() << " has : " << p1.showBooks() << "in book" << endl;
            myfile << p2.getName() << " has : " << p2.showHand() << "in hand" << endl;
            myfile << p2.getName() << " has : " << p2.showBooks() << "in book" << endl;
            myfile << "\n";
        }
        else {
            Card a;
            Card b;
            while(p2.checkHandForPair(a,b)==true){

            };

            if(p2.getHandSize()==0){
                dealHand(d, p2, 1);
            }
            Card c1 = p2.chooseCardFromHand();
            cout << p2.getName() << " asks - Do you have a " << c1.rankString(c1.getRank()) << "?\n";
            myfile << p2.getName() << " asks - Do you have a " << c1.rankString(c1.getRank()) << "?\n";
            bool x = p1.cardInHand(c1);
            if (x == true) {
                while (p1.cardInHand(c1) == true) {
                    cout << p1.getName() << " says - Yes. I have a " << c1.rankString(c1.getRank()) << "\n";
                    myfile << p1.getName() << " says - Yes. I have a " << c1.rankString(c1.getRank()) << "\n";
                    //Card c2 = handOver(p1, p2, c1);
                    p2.addCard(p1.removeCardFromHand(c1));
                    //if (p2.checkHandForPair(c1,c2) == true) {
                        //p2.bookCards(c1, c2);
                    //}
                }
                while(p2.checkHandForPair(a,b)==true){

                };
            }

            else {
                cout << p1.getName() << " says - Go Fish\n";
                myfile << p1.getName() << " says - Go Fish\n";
                dealHand(d, p2, 1);
                pt = p1;
            }
            cout << p1.getName() << " has : " << p1.showHand() << "in hand" << endl;
            cout << p1.getName() << " has : " << p1.showBooks() << "in book" << endl;
            cout << p2.getName() << " has : " << p2.showHand() << "in hand" << endl;
            cout << p2.getName() << " has : " << p2.showBooks() << "in book" << endl;
            cout << "\n";
            myfile << p1.getName() << " has : " << p1.showHand() << "in hand" << endl;
            myfile << p1.getName() << " has : " << p1.showBooks() << "in book" << endl;
            myfile << p2.getName() << " has : " << p2.showHand() << "in hand" << endl;
            myfile << p2.getName() << " has : " << p2.showBooks() << "in book" << endl;
            myfile << "\n";

        }
    }
    Card a,b;
    while(p1.checkHandForPair(a,b)==true);
    while(p2.checkHandForPair(a,b)==true);
    cout << p1.getName() << " has : " << p1.showHand() << "in hand" << endl;
    cout << p1.getName() << " has : " << p1.showBooks() << "in book" << endl;
    cout << p2.getName() << " has : " << p2.showHand() << "in hand" << endl;
    cout << p2.getName() << " has : " << p2.showBooks() << "in book" << endl;
    cout << "\n";
    cout << p1.getName() << " has " << p1.getBookSize()/2 << " books \n";
    cout << p2.getName() << " has " << p2.getBookSize()/2 << " books \n";
    myfile << p1.getName() << " has : " << p1.showHand() << "in hand" << endl;
    myfile << p1.getName() << " has : " << p1.showBooks() << "in book" << endl;
    myfile << p2.getName() << " has : " << p2.showHand() << "in hand" << endl;
    myfile << p2.getName() << " has : " << p2.showBooks() << "in book" << endl;
    myfile << "\n";
    myfile << p1.getName() << " has " << p1.getBookSize()/2 << " books \n";
    myfile << p2.getName() << " has " << p2.getBookSize()/2 << " books \n";

    if(p1.getBookSize() > p2.getBookSize()){
        cout << p1.getName() << " won\n";
        myfile << p1.getName() << " won\n";
    }
    else if(p2.getBookSize() > p1.getBookSize()){
        cout << p2.getName() << " won\n";
        myfile << p2.getName() << " won\n";
    }
    else {
        cout << "tie game";
        myfile << "tie game";
    }
    myfile.close();
    return EXIT_SUCCESS;
}




void dealHand(Deck &d, Player &p, int numCards) {
    for (int i=0; i < numCards; i++)
        p.addCard(d.dealCard());
}


