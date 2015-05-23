/* 
 * File:   main.cpp
 * Author: TheSheikh
 * Purpose: Assignment 6
 * Created on May 21, 2015, 12:22 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void problem0();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
int countPerfect(int[], int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare menu variable choice
    char choice;
    //Repeat the menu
    do{
        //General Menu Format
        //Display the selection
        cout<<"Type 0 to solve problem 3" <<endl;
        cout<<"Type 1 to solve problem 11"<<endl;
        cout<<"Type 2 to solve problem "<<endl;
        cout<<"Type 3 to solve problem "<<endl;
        cout<<"Type 4 to solve problem "<<endl;
        cout<<"Type 5 to solve problem "<<endl;
        cout<<"Type 6 to solve problem "<<endl;
        cout<<"Type 7 to solve problem "<<endl;
        cout<<"Type 8 to solve problem "<<endl;
        cout<<"Type 9 to solve problem "<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case '0':problem0();break;
            case '1':problem1();break;
            case '2':problem2();break;
            case '3':problem3();break;
            case '4':problem4();break;
            case '5':problem5();break;
            case '6':problem6();break;
            case '7':problem7();break;
            case '8':problem8();break;
            case '9':problem9();break;
            default :cout<<"Exit?"<<endl;
        };
    }while(choice>='0'&&choice<='9');
    //Exit Stage right
    return 0;
}

//*******************         Problem 0           ********************/
void problem0(){
    //Declare variables
    const int SIZE =5;
    int winningDigits[SIZE];
    int player[SIZE];
    srand(time(0));
    int equal= 0;
    for (int i=0; i<SIZE; i++){
        winningDigits[i]= rand()%10;
    }
//Inputs
    cout<<"Input the digits in your lottery ticket here!"<<endl;
    for (int i=0; i<SIZE; i++){
        cin>>player[i];
        while(player[i]<0 || player[i]>9){
            cout<<"Invalid input, digits can only be between 0 and 9"<<endl;
            cin>>player[i];
        }
    }
//Compare tickets
    for (int i=0; i<SIZE; i++){
        if (winningDigits[i] == player[i]){
            equal += 1;
        }
    }
//Output results
    cout<<endl;
    cout<<"The winning digits are:"<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<winningDigits[i]<<endl;
    }
    cout<<"The players digits are:"<<endl;
    for (int i=0; i<SIZE; i++){
        cout<<player[i]<<endl;
    }  
    cout<<"Here are the number of matching digits: "<<equal<<endl;
    for( int i=0; i<SIZE; i++){
        cout<<player[i]<<" ";
        cout<<winningDigits[i]<<endl;
    }
}

//*******************         Problem 1           ********************/
void problem1(){
class TestGrader {
public:
  char answers[20];
  void setKey(string stuff)
  {
      for(int i=0; i<20; i++){
          answers[i] = stuff[i];
      }
  }
  void grade (char *stuff){
      int equal = 0;
      for (int i=0; i<20; i++){
          if (answers[i] == stuff[i]){
              equal += 1;
          }
      }
      if (equal<15){
          cout<<"You have failed your exam!"<<endl;
          cout<<equal<<"/20"<<endl;
      }
      else {
          cout<<"You have passed!"<<endl;
          cout<<equal<<"/20"<<endl;
      }
  }
};

    TestGrader a;
    //char answers[20]={'B','D','A','A','C','A','B','A','C','D','B','C','D','A','D','C','C','B','D','A'};
    a.setKey("BDAACABACDBCDADCCBDA");
    cout<<"Input answers here:"<<endl;
    char input [20];
    for (int i=0; i<20; i++){
        cin>>input[i];
        while (input[i] != 'A' && input[i] != 'B' && input[i] != 'C' && input[i] != 'D'){
            cout<<"Invalid input, answer must be A, B, C, or D"<<endl;
            cin>>input[i];
        }
        }
    a.grade(input);
    
}

//*******************         Problem 2           ********************/
void problem2(){
//Declare Variable
    int SIZE = 21;
    string rNum[SIZE] = {"","I","II","III","IV","V","VI","VII","VIII","IX","X", 
                         "XI","XII","XIII","XIV","XV","XVI","XVII","XIII","XIX","XX"};
    int input;
    //Prompt for input
    cout<<"Enter numbers between 1-20 to convert to Roman numerals"<<endl;
    cout<<"Press 0 to quit"<<endl<<endl;
    while (input != 0){ //Do while input is not 0
        cout<<"Number = ";
        cin>>input;
        while (0>input || input>20){ //Input Validation
            cout<<"Invalid Input. Enter 1-20. ";
            cin>>input;
        }
        if (input == 0) {} //If input = 0, do nothing
        else { //If valid, output correct Roman numeral
            cout<<"Roman Numeral = "<<rNum[input]<<endl<<endl;
        }
    }
}

//*******************         Problem 3           ********************/
void problem3(){
//Declare Variables
    string weekday[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    string mName[3] = {"George","DonkeyKong","KingKong"};
    int monkey[3][7] = {};
    float average;
    int high, hName, hFood;
    int low, lName, lFood;
    //Collect food eaten for the week
    for (int i=0; i<3; i++){
        cout<<mName[i]<<endl;
        for (int u=0; u<7; u++){
            cout<<setw(9)<<weekday[u]<<" : ";
            cin>>monkey[i][u];
            while (monkey[i][u]<0){
                cout<<"Invalid Input. Enter a positive number. ";
                cin>>monkey[i][u];
            }
        }
        cout<<endl;
    }
    //Calculate Average
    for (int i=0; i<3; i++){
        for (int u=0; u<7; u++){
            average += monkey[i][u];
        }
    }
    average /= 7;
    //Find most and least food eaten
    high = monkey[0][0];
    hName = 0;
    hFood = 0;
    low = monkey[0][0];
    lName = 0;
    lFood = 0;
    for (int i=0; i<3; i++){
        for (int u=0; u<7; u++){
            if (monkey[i][u]>high){
                high = monkey[i][u];
                hName = i;
                hFood = u;
            }
            if (monkey[i][u]<low){
                low = monkey[i][u];
                lName = i;
                lFood = u;
            }
        }
    }
    //Output average, high, and low
    cout<<mName[hName]<<" ate the most food ("<<monkey[hName][hFood]<<" lbs) on "<<weekday[hFood]<<"."<<endl;
    cout<<mName[lName]<<" ate the least food ("<<monkey[lName][lFood]<<" lbs) on "<<weekday[lFood]<<"."<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The monkey family ate an average of "<<average<<" lbs of food per day."<<endl;
}

//*******************         Problem 4           ********************/
void problem4(){
//Declare Variable
    int SIZE = 10;
    int scores[SIZE]={};
    int sCount = 0;
    //Prompt user for test scores
    cout<<"Enter 10 test scores"<<endl;
    for (int i=0; i<SIZE; i++){
        cout<<"Test "<<i+1<<" = ";
        cin>>scores[i];
        if (scores[i]<0 || 100<scores[i]) {
            cout<<"Invalid Input, Enter 0-100. ";
            cin>>scores[i];
        }
    }
    cout<<endl;
    //Call perfect score counter
    sCount = countPerfect(scores, SIZE);
    cout<<"You received "<<sCount<<" perfect scores"<<endl;
}

//*******************         Problem 5           ********************/
void problem5(){
    int SIZE = 5;
    string sName[SIZE] = {"mild","medium","sweet","hot","zesty"};
    int sSold[SIZE] = {};
    int high, h;
    int low, l;
    //Prompt for input
    cout<<"Enter sales for all 5 salsa types."<<endl;
    for (int i=0; i<SIZE; i++){
        cout<<setw(7)<<sName[i]<<" = ";
        cin>>sSold[i];
    }
    cout<<endl;
    //Output Sales
    cout<<"Salsa Sales:"<<endl;
    for (int i=0; i<SIZE; i++){
        cout<<setw(7)<<sName[i]<<" = "<<sSold[i]<<endl;
    }
    cout<<endl;
    //Find highest and lowest sales
    high = sSold[0];
    low = sSold[0];
    for (int i=0; i<SIZE; i++){
        if (sSold[i] > high) {
            high = sSold[i];
            h=i;
        }
        if (sSold[i] < low) {
            low = sSold[i];
            l=i;
        }
    }
    //Output highest and lowest sales
    cout<<"The highest sales are "<<sName[h]<<" salsa, at "<<sSold[h]<<" sales."<<endl;
    cout<<"The lowest sales are "<<sName[l]<<" salsa, at "<<sSold[l]<<" sales."<<endl;
    cout<<endl;
}

//*******************         Problem 6           ********************/
void problem6(){
    struct Drink {
    string name;
    float  cost;
    int number;
};
class Fountain{
private:
    float inputMoney (int choice){
        float x;
        cin>>x;
        while (x < bev[choice].cost){
            cout<<"Not enough money"<<endl;
            cin>>x;
        }
        return x; 
    }
    void dailyReport (){
        cout<<"The total sale are "<<endl;
        cout<<total<<endl;;
    }
public:
    Drink *bev;
    int num;
    float total;
    Fountain(Drink* stuff, int fish){
        bev = stuff;
        num=fish;
        total = 0;
        
    }
    ~Fountain(){dailyReport();}
    void displayChoices(){
        for(int i=0; i<num; i++){
            cout<<i+1<<" "<<bev[i].name<<" "<<bev[i].cost<<endl;
        }
    }
    int buyDrink(){
        int choice;
        cout<<"Which drink would you like to buy?"<<endl;
        displayChoices();
        cout<<"Type a number"<<endl;
        cin>>choice;
        while (choice <1 || choice >num){
            cout<<"Invalid Input"<<endl;
            cin>>choice;
        }
        choice -= 1;
        cout<<"Give me your money."<<endl;
        float money = inputMoney(choice);
        total += bev[choice].cost;
        cout<<"Here is your change!"<<endl;
        cout<<"$"<<money - bev[choice].cost<<endl;
    }

};
        
    Drink type[5] = {"Cola", 0.75, 20, "Root Beer", 0.75, 20, "Orange Soda", 0.75, 20, "Grape Soda", 0.75, 20, "Water", 1.00, 20};
    Fountain fountain(type, 5);
    //fountain.displayChoices();
    //fountain.buyDrink();
    while (true) {
        char z;
        cout<<"Do you want to buy a drink? Y for yes, N for no: "<<endl;
        cin >> z;
        while(z != 'Y' && z != 'N'){
            cout<<"Invalid Input"<<endl;
            cin>>z;
        }
        if (z == 'Y'){
            fountain.buyDrink();
            
        }
        else {
            break;
        }
    }
    
}

//*******************         Problem 7           ********************/
void problem7(){
    
}

//*******************         Problem 8           ********************/
void problem8(){
    
}

//*******************         Problem 9           ********************/
void problem9(){
    
}
int countPerfect(int scores[], int SIZE){
    //Declare Variables
    int sCount = 0;
    //Count perfect scores
    for (int i=0; i<SIZE; i++){
        if (scores[i]==100) {sCount += 1;}
    }
    return sCount;
}