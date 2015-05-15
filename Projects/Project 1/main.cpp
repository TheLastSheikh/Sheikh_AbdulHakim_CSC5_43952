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
#include <fstream>
#include <string>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

void shuffle ( int[] )                                             ;//Function for Shuffling deck of cards. 
int  getNum  ( int[] )                                             ;//Function for getting number of cards in deck
void getChnc ( int[] , int [][2])                                  ;//Function for getting the chance for drawing specific cards (Ace,2,3,4... --->King)
int  drwCard ( int[] , int [][2])                                  ;//Function to draw a card and return card value
int  cardVal ( int )                                               ;//Function enumerating the numeric values of each card
char drwChar ( int )                                               ;//Function to show character value of each card, rather ineptly named but it works
int  numAces ( int [] )                                            ;//
void decrAce ( int [] )                                            ;//Function to decrement the value of the aces should the sum of the hand equal more than 21
int  sum     ( int [] )                                            ;//Function for adding the value of hand
void enterLn ( int )                                               ;//Function to add white space
bool bust    ( int [] )                                            ;//Function to determine whether player has busted or not
void bgnGame ( int [], int [][2], int [], char [], int [], char []);//Function to begin game
void dsplyUI ( char [], char [], int [], int [], bool )            ;//Function to display user interface
int  hndSize ( char [])                                            ;//Function to display hand size
void dispHnd ( bool , char [])                                     ;//Function to display the hand
void ptCrdHn ( int [], int [][2], char [], int [])                 ;//Function to put card in hand
void clrScrn ( )                                                   ;//Function to clear screen in console window
void enterLn ( )                                                   ;//Function to dictate how many lines to clear screen



//Declare Functions

//The shuffle function
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
//This function determines the probability of drawing a specific card type again
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
//Purpose of this function is to draw a card. This function will call the carDeck and carChnc arrays to draw a card
//In order to randomize the drawing of the card, I have seeded a random number with respect to time 
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
//Purpose of this function is to assign an integer value to each card, so that they can be summed later. Case 1 represents an Ace, 
//And the value assigned to it is 11 in accordance with Blackjack rules and all face cards J,Q,K are represented by 11,12,13 respectively, yield a value of 10
//The cards will be given character values for the purpose of output in the next function
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
//This function 
int numAces(int handVal[]){
    int numAces = 0;
    for(int i = 0; handVal[i] > 0; i++){
        if (handVal[i] == 11){
            numAces++;
        }
    }
    return numAces;
}
//This function, as per the rules of blackjack, decrements the value of the ace from 11 to 1 if the sum exceeds 21 otherwise. 
void decrAce(int handVal[]){
    for(int i= 0;i < 52;i++){
        if (handVal[i] == 11){
            handVal[i] = 1;
            break;
        }
    }
}
//This function sums the hand value of either the dealer or the player
int sum (int handVal[]){
    int sum = 0;
    for (int i=0; handVal[i]>0; i++){
        sum += handVal[i];
    }
    return sum;
}
//This function computes whether players hand results in a bust or not
bool bust (int handVal []){
    if (sum (handVal) > 21){
        if (numAces(handVal) > 0){
            decrAce(handVal);
            return false;
        }else{
            return true;
        }
        
    }
    else {
        return false;
    }  
}
//This function is to begin the game. It calls in all the variables that need to be computed to play the game
//The deck, the probability or chance function, the player hand, the dealer hand, and the character values thereof
void bgnGame (int carDeck [], int carChnc[][2], int plyHand[], char cPlyHnd[], int delHand[], char cDlHand[]){
        shuffle(carDeck);
        int x = drwCard (carDeck, carChnc);    
        plyHand[0] =  cardVal(x);
        cPlyHnd[0] = drwChar(x);
        x = drwCard(carDeck, carChnc);
        plyHand[1] = cardVal(x);
        cPlyHnd[1] = drwChar(x);
        int y = drwCard (carDeck, carChnc);
        delHand [0] = cardVal(y);
        cDlHand [0] = drwChar (y);
        int z = drwCard (carDeck, carChnc);
        delHand[1] = cardVal(z);
        cDlHand[1] = drwChar(z);
    
}

void clrScrn(){
 enterLn(100);
}

void enterLn(int i){
 for(; i > 0; i--){
 cout << endl;
 }
}

void dsplyUI(char cPlyHnd[], char cDlHand[], int plyHand[], int delHand[], bool plyTurn){
 clrScrn();
 cout << "Dealer Hand: ";
 dispHnd(plyTurn, cDlHand);
 cout << endl << "Player Hand: ";
 dispHnd(false, cPlyHnd);
 cout << "  Hand Value: " << sum(plyHand) << endl;
}

int hndSize(char hand[]){
 int i = 0;
 while(hand[i] > 0){
 i++;
 }
 return i;
}

void dispHnd(bool plyTurn, char hand[]){

 int size = hndSize(hand);
 for (int i=0; i < size; i++){
 if (i == 0){
 if (plyTurn){
 cout << "?,";
 }else{
 cout << hand[i] << ",";
 }
 }else{
 if (i < (size - 1)){
 cout << hand[i] << ",";
 }else{
 cout << hand[i];
 }
 
 }
    }
}

void ptCrdHn(int carDeck[], int carChnc[][2], char cHand[], int hand[]){
 int x = drwCard(carDeck, carChnc);
 int y = hndSize(cHand);
 hand[y] = cardVal(x);
 cHand[y] = drwChar(x);
}
 
int main(int argc, char** argv) {
//Declare Variables
    ofstream out;
 bool cycle = true;
 while(cycle){
 //13 Cards in deck starting from Ace = 1 to King = 13
    int carDeck  [14];
    //
    int carChnc  [14][2];
    //Player Hand Array, keeps track of number of all the cards drawn for the player
    int plyHand  [15] = {};                          //Initialize  values of array as '0'
    char cPlyHnd [15] = {};                          //Character assignment for each spot in array (i.e. 11=Jack, 12=Queen, 13=King etc.)
    
    int delHand [15] = {};                           //Initialize  values of array as '0'
    char cDlHand [15] = {};                          //Character assignment for each spot in array (i.e. 11=Jack, 12=Queen, 13=King etc.)
  
    int choice;                                      //The choice input variable for whether or not player wants to hit or stay
    int d = sum (delHand);                           //Sum of dealers hand
    int p = sum (plyHand);                           //Sum of players hand                          
    //Output file
    out.open("blackjack.txt");
    cout<<"Writing to file"<<endl;
    bgnGame (carDeck, carChnc, plyHand, cPlyHnd, delHand, cDlHand);

 bool plyTurn = true;
 bool delTurn = true;
 bool gameEnd = false;
 while(plyTurn){
 dsplyUI(cPlyHnd, cDlHand, plyHand, delHand, true);
 cout<<"Would you like to hit or stay (1 for hit, 0 for stay) "<<endl;
 cin>>choice;

 if (choice > 0 || choice < 0){
 ptCrdHn(carDeck, carChnc, cPlyHnd, plyHand);
 if (bust(plyHand)){
 dsplyUI(cPlyHnd, cDlHand, plyHand, delHand, false);
 cout << "You owe me $6,000,000." << endl;
 plyTurn = false;
 delTurn = false;
 gameEnd = true;
 }else{
 plyTurn = true;
 }
 }else{
 plyTurn = false;
 }
 }
 while(delTurn){
 dsplyUI(cPlyHnd, cDlHand, plyHand, delHand, false);
 if (!bust(delHand)){
 if (sum(delHand) < 17){
 ptCrdHn(carDeck, carChnc, cDlHand, delHand);
 delTurn = true;
 }else{
 delTurn = false;
 }
 }else{
 dsplyUI(cPlyHnd, cDlHand, plyHand, delHand, false);
 cout << "Dealer busted, you win $6,000,000!" << endl;
 out  << "Dealer busted, you win $6,000,000!" << endl;
 delTurn = false;
 gameEnd = true;
 }   
 }
 while(!gameEnd){
 if (sum(plyHand) > sum(delHand)){
 cout << "You win $6,000,000!" << endl;
 out  << "You win $6,000,000!" << endl;
 }
 if (sum(delHand) > sum(plyHand)){
 cout << "Dealer wins!" << endl;
 out  << "Dealer wins!" << endl;
 }
 if (sum(delHand) == sum(plyHand)){
 cout << "It's a tie!" << endl;
 out  << "It's a tie!" << endl;
 }
 gameEnd = true;
 }
 cout << "Do you want to play again? Y/N ";
 char input;
 cin >> input;
 if (input == 'Y' || input == 'y'){
 cycle = true;
 }else{
 cycle = false;
 }
 };
 //Close File
        out.close();
    return 0;
}