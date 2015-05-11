/* 
 * File:   main.cpp
 * Author: The Sheikh
 * Purpose: Make a Black Jack Program
 * Created on May 6, 2015, 7:35 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

void shuffle ( int[] )            ;//Function for Shuffling deck of cards. 
int  getNum  ( int[] )            ;//Function for getting number of cards in deck
void getChnc ( int[] , int [][2]) ;//Function for getting the chance for drawing specific cards (Ace,2,3,4... --->King)
int  drwCard ( int[] , int [][2]) ;//Function to draw a card and return card value

//Execution Begins Here!

void shuffle (int carDeck[]){
    for (int i=1; i<=13; i++){
        carDeck[i]=4;
    }
}

int getNum (int carDeck[]){
    int num = 0;
    for (int i=1; i<=13; i++){
        num += carDeck[i];
    }
    return num;
}


void getChnc (int carDeck[], int carChnc[][2]){
    
    for (int i=0; i<getNum(carDeck);){            //This for-loop cycles through the total number of cards in the deck
        for (int j=1; j<=13; j++){                //This for-loop cycles through the specific values associated with playing card decks to create chances
            int x=carDeck[j];                     //This variable x is the number of that type [j] of card
            if ( x == 0 ){                        //If the number of the card [j] is 0, then
                carChnc[j][0]=0;                  //Set chance of drawing the card as 0
                carChnc[j][1]=0;                  //Set Chance of drawing the card as 0
            }
            else {                                //As long as x is not zero
                carChnc[j][0]= i+1;               //Beginning position for card type [j]
                carChnc[j][1]= i+x;               //Ending position for card type [j]
                i+=x;                             //i is incremented by the amount of card type [j]
            }
        }
    }
}

int drwCard (int carDeck[], int carChnc[][2]){
    getChnc (carDeck, carChnc);                   //Calling chance function
    srand (time(0));                              //Seed random number based on time
    int x= getNum(carDeck);                       //Number of cards in deck
    int y= 1 + (rand() % x);                      //Random number modulus number of cards in deck +1 to yield number within range of cards
    for (int i=1; i<=13; i++){
        if (y>=carChnc[i][0] && y<=carChnc[i][1]){
            carDeck[i]--;
            return i;
        }
    }
}

int cardVal(int i){
    
    switch(i){
        case 1:
            return 11;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 7;
        case 8:
            return 8;
        case 9:
            return 9;
        case 10:
            return 10;
        case 11:
            return 10;
        case 12:
            return 10;
        case 13:
            return 10;
    }
    
}

//Enumerating the various cards in the deck
char drwChar(int i){
    switch(i){
        case 1:
            return 'A';
        case 2:
            return '2';
        case 3:
            return '3';
        case 4:
            return '4';
        case 5:
            return '5';
        case 6:
            return '6';
        case 7:
            return '7';
        case 8:
            return '8';
        case 9:
            return '9';
        case 10:
            return 'T';
        case 11:
            return 'J';
        case 12:
            return 'Q';
        case 13:
            return 'K';
    }
}

int numAces(int handVal[]){
    int numAces = 0;
    for(int i = 0; handVal[i] > 0; i++){
        if (handVal[i] == 11){
            numAces++;
        }
    }
    return numAces;
}

void decrAce(int handVal[]){
    for(int i= 0;i < 52;i++){
        if (handVal[i] == 11){
            handVal[i] = 1;
            break;
        }
    }
}

int main(int argc, char** argv) {
//Declare Variables
    //13 Cards in deck starting from Ace = 1 to King = 13
    int carDeck  [14];
    //
    int carChnc  [14][2];
    //Player Hand Array, keeps track of number of all the cards drawn for the player
    int plyHand  [15] = {};                          //Initialize  values of array as '0'
    shuffle(carDeck);
    char cPlyHnd [15] = {};                          //Character assignment for each spot in array (i.e. 11=Jack, 12=Queen, 13=King etc.)
    
    int delHand [15] = {};
    char cDlHand [15] = {};
    
    
    int x = drwCard (carDeck, carChnc);
    cout<<cardVal(x)<<", "<<drwChar(x)<<endl;
    
    
    return 0;
}

