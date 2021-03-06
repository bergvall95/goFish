//
// Created by Naris on 11/1/2018.
//

#include "card.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

card :: card(){
    myRank = 2;
    mySuit = spades;
}

card :: card(int x, Suit ss) {
    myRank = x;
    mySuit = ss;
}

string card ::toString() const {
    string s;
    if(mySuit == spades) {
        if (myRank == 2) {
            s = "As";
        }
        else if (myRank == 11) {
            s = "Js";
        }
        else if (myRank == 12) {
            s = "Qs";
        }
        else if (myRank == 13) {
            s = "Ks";
        }
        else {
            s = to_string(myRank) + "s";
        }
    }
    else if(mySuit == hearts) {
        if (myRank == 2) {
            s = "Ah";
        }
        else if (myRank == 11) {
            s = "Jh";
        }
        else if (myRank == 12) {
            s = "Qh";
        }
        else if (myRank == 13) {
            s = "Kh";
        }
        else {
            s = to_string(myRank) + "h";
        }
    }
    else if(mySuit == diamonds) {
        if (myRank == 2) {
            s = "Ad";
        }
        else if (myRank == 11) {
            s = "Jd";
        }
        else if (myRank == 12) {
            s = "Qd";
        }
        else if (myRank == 13) {
            s = "Kd";
        }
        else {
            s = to_string(myRank) + "d";
        }
    }
    else {
        if (myRank == 2) {
            s = "Ac";
        }
        else if (myRank == 11) {
            s = "Jc";
        }
        else if (myRank == 12) {
            s = "Qc";
        }
        else if (myRank == 13) {
            s = "Kc";
        }
        else {
            s = to_string(myRank) + "c";
        }
    }
    return s;
}
bool card ::sameSuitAs(const card &c) const {
    if(mySuit == c.mySuit){
        return true;
    }
    return  false;
}

int card ::getRank() const {
    return myRank;
}

string card ::suitString(Suit s) const {
    string str;
    if(s == spades) {
        str = "s";
    }
    else if(s == hearts) {
        str = "h";
    }
    else if(s == diamonds) {
        str = "d";
    }
    else {
        str = "c";
    }
    return str;
}

string card ::rankString(int r) const {
    string s;
    if (r == 2) {
        s = "A";
    }
    else if (r == 11) {
        s = "J";
    }
    else if (r == 12) {
        s = "Q";
    }
    else if (r == 13) {
        s = "K";
    }
    else {
        s = to_string(r);
    }
    return s;
}

