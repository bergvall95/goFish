//
// Created by Naris on 11/1/2018.
//
#include <sstream>
#include "card.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Card :: Card(){
    myRank = 1;
    mySuit = spades;
}

Card :: Card(int x, Suit ss) {
    myRank = x;
    mySuit = ss;
}

string Card ::toString() const {
    string s;
    if(mySuit == spades) {
        if (myRank == 1) {
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
            string x;
            stringstream y;
            y << myRank;
            x = y.str();
            s = x + "s";
        }
    }
    else if(mySuit == hearts) {
        if (myRank == 1) {
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
            string x;
            stringstream y;
            y << myRank;
            x = y.str();
            s = x + "h";
        }
    }
    else if(mySuit == diamonds) {
        if (myRank == 1) {
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
            string x;
            stringstream y;
            y << myRank;
            x = y.str();
            s = x + "d";
        }
    }
    else {
        if (myRank == 1) {
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
            string x;
            stringstream y;
            y << myRank;
            x = y.str();
            s = x + "c";
        }
    }
    return s;
}
bool Card ::sameSuitAs(const Card &c) const {
    if(mySuit == c.mySuit){
        return true;
    }
    return  false;
}

int Card ::getRank() const {
    return myRank;
}

string Card ::suitString(Suit s) const {
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

string Card ::rankString(int r) const {
    string s;
    if (r == 1) {
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
        string x;
        stringstream y;
        y << r;
        x = y.str();
        s = x;
    }
    return s;
}

