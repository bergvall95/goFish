#include <iostream>
#include <cstdlib>
#include "deck.h"



Deck::Deck(void){
	Card myCards[SIZE]; // size of deck
	for (int i= 0; i<13; i++){
		myCards[i]= Card(i,spades); 
	}
	for (int i=13; i<26; i++){
		myCards[i]= Card(i,clubs);
	}

	for (int i= 26; i<39; i++){
		myCards[i]= Card(i,hearts); 
	}
	for (int i=39; i<52; i++){
		myCards[i]= Card(i,diamonds);
	}
	
	int  myIndex=0; // current card to deal
	
}
	
Card Deck::dealCard(void){
	Card temp;
	temp= myCards[myIndex];
	myIndex++;
	return(temp);

}

int size(void){
	 
	return(SIZE- myIndex);
}	


void Deck::shuffle(){   // shuffle the deck, all 52 cards present
	card n[size()};
	int count = size();
	srand(time(NULL));
	CardNode *curr =myCards;
	if(myCards== NULL){ 
		return; 
	}
	
	while(1){
		while(1){
			int x = rand() % getNumCards();
			string a= "";
			string b= n[x].getRank();
			
			if(a==b){
				n[x] = curr->c;
				break;
			}
			
			curr= curr->next;
			
			if(curr==NULL){
				break;
			}
		}
	
		CardNode *rep = cards;
		
		for (int i =0; i<count; i++){
			rep->c= n[i];
			rep=rep->next;
		}
		
	}	
}
			
    Card dealCard();   // get a card, after 52 are dealt, fail 

    int  size() const; // # cards left in the deck

  private:

    Card myCards[SIZE];
    int myIndex;  // current card to deal
