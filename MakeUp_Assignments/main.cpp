/* 
 * File:   main.cpp
 * Author: TheSheikh
 *
 * Created on June 7, 2015, 7:27 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <string.h>
using namespace std;
//User Libraries

//Global Constants
const float CNVPCNT = 100;              //Convert percentages
const float G = 9.8;                    //Gravitational Constant
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
void problem10();
void problem11();
void problem12();
void problem13();
void problem14();
int popSize(unsigned short, float, float, unsigned short, unsigned short);
int nAcdnts(string);                    //Get number of accidents function
void fndLwst(int, int, int, int, int);  //Find lowest function
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare menu variable choice
    int choice;
    //Repeat the menu
    do{
        //General Menu Format
        //Display the selection
        cout<<"Type 0 to solve makeup problem Mar 11 Prob1"<<endl;
        cout<<"Type 1 to solve makeup problem Mar 11 Prob2"<<endl;
        cout<<"Type 2 to solve makeup problem Mar 11 Prob3"<<endl;
        cout<<"Type 3 to solve makeup problem Mar 23 Prob1"<<endl;
        cout<<"Type 4 to solve makeup problem Apr 8 Prob1"<<endl;
        cout<<"Type 5 to solve makeup problem Apr 8 Prob2"<<endl;
        cout<<"Type 6 to solve makeup problem Apr 8 Prob3"<<endl;
        cout<<"Type 7 to solve makeup problem Apr 15 Prob1"<<endl;
        cout<<"Type 8 to solve makeup problem Apr 15 Prob2"<<endl;
        cout<<"Type 9 to solve makeup problem Apr 15 Prob3"<<endl;
        cout<<"Type 10 to solve makeup problem Apr 22 Prob1"<<endl;
        cout<<"Type 11 to solve makeup problem Apr 22 Prob2"<<endl;
        cout<<"Type 12 to solve makeup problem Apr 22 Prob3"<<endl;
        cout<<"Type 13 to solve makeup problem May 11 Prob1"<<endl;
        cout<<"Type 14 to solve makeup problem May 11 Prob2"<<endl;
        cout<<"Type 15 to solve makeup problem May 11 Prob3"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case 0:problem0()   ;break;
            case 1:problem1()   ;break;
            case 2:problem2()   ;break;
            case 3:problem3()   ;break;
            case 4:problem4()   ;break;
            case 5:problem5()   ;break;
            case 6:problem6()   ;break;
            case 7:problem7()   ;break;
            case 8:problem8()   ;break;
            case 9:problem9()   ;break;
            case 10:problem10() ;break;
            case 11:problem11() ;break;
            case 12:problem12() ;break;
            case 13:problem13() ;break;
            case 14:problem14() ;break;
            default :cout<<"Exit?"<<endl;
        };
    }while(choice>='0'&&choice<='9');
    //Exit Stage right
    return 0;
}

//*******************         Problem 0           ********************/
void problem0(){
    //Declare Variables
    char choice;
    float feet, time;
    //Menu and Length Prompt
    cout<<"This will calculate the time it takes in seconds to travel through a specified medium given a distance in feet."<<endl<<endl;
    cout<<"Press 'A' for Air    (1,100  fps)"<<endl;
    cout<<"Press 'W' for Water  (4,900  fps)"<<endl;
    cout<<"Press 'S' for Steel  (16,400 fps)"<<endl<<endl;
    cout<<"Medium = ";
    cin>>choice;
    while (choice != 'a' && choice != 'A' && choice != 'w' && choice != 'W' && choice != 's' && choice != 'S'){
        cout<<"Invalid Input. Try again. ";
        cin>>choice;
    }
    cout<<endl;
    cout<<"Distance (feet) = ";
    cin>>feet;
    while (feet<0){
        cout<<"Enter a positive distance. ";
        cin>>feet;
    }
    cout<<endl;
    //Menu Switch
    switch(choice){
        case'a':
        case'A':
            time = feet/1100;
            break;
        case'w':
        case'W':
            time = feet/4900;
            break;
        case's':
        case'S':
            time = feet/16400;
            break;
        default:
            break;
    }
    //Output Time
    cout<<"The sound wave will travel "<<feet<<" feet in "<<fixed<<setprecision(4)<<showpoint<<time<<" seconds."<<endl;
}

//*******************         Problem 1           ********************/
void problem1(){
//Declare Variables
    char choice;
    float meters, time;
    //Menu and Length Prompt
    cout<<"This will calculate the distance traveled in meters given the gas medium and time traveled in seconds."<<endl<<endl;
    cout<<"Press 'C' for Carbon dioxide (258.0  mps)"<<endl;
    cout<<"Press 'A' for Air            (331.5  mps)"<<endl;
    cout<<"Press 'E' for Helium         (972.0  mps)"<<endl;
    cout<<"Press 'Y' for Hydrogen       (1270.0 mps)"<<endl<<endl;
    cout<<"Medium = ";
    cin>>choice;
    while (choice != 'c' && choice != 'C' && choice != 'A' && choice != 'a' && choice != 'E' && choice != 'e' && choice != 'y' && choice != 'Y'){
        cout<<"Invalid Input. Try again. ";
        cin>>choice;
    }
    cout<<endl;
    cout<<"Time traveled (seconds) = ";
    cin>>time;
    while (time < 0 || 30 < time){
        cout<<"Enter time between 0-30 ";
        cin>>time;
    }
    cout<<endl;
    //Menu Switch
    switch(choice){
        case'c':
        case'C':
            meters = time * 258;
            break;
        case'a':
        case'A':
            meters = time * 331.5;
            break;
        case'e':
        case'E':
            meters = time * 972;
            break;
        case'y':
        case'Y':
            meters = time * 1270;
            break;
        default:
            break;
    }
    //Output Time
    cout<<"The sound wave will travel "<<meters<<" meters in "<<time<<" seconds."<<endl;
}

//*******************         Problem 2           ********************/
void problem2(){
//Declare Variables
    float wLength;
    //Prompt for inputs
    cout<<"What is length of the electromagnetic wave (meters)? ";
    cin>>wLength;
    //Output wave type
    if (0<wLength && wLength<=1e-11){
        cout<<"The wave is a gamma ray."<<endl;
    }
    else if (1e-11<wLength && wLength<=1e-8){
        cout<<"The wave is a x-ray."<<endl;
    }
    else if (1e-8<wLength && wLength<=4e-7){
        cout<<"The wave is ultraviolet."<<endl;
    }
    else if (4e-7<wLength && wLength<=4e-7){
        cout<<"The wave is visible light."<<endl;
    }
    else if (7e-11<wLength && wLength<=1e-3){
        cout<<"The wave is a infrared light."<<endl;
    }
    else if (1e-3<wLength && wLength<=1e-2){
        cout<<"The wave is a microwave."<<endl;
    }
    else if (1e-2<wLength){
        cout<<"The wave is a radio radio wave."<<endl;
    }
    else {
        cout<<"Are you sure you measured right?"<<endl;
    }
}

//*******************         Problem 3           ********************/
void problem3(){
int count = 0;
    cout << "This will generate ASCII codes 32 through 127." << endl;
    for (int u = 32; u <= 127; u++) {
        char x = u;
        cout << x << " ";
        count += 1;
        if (count % 16 == 0) {
            cout << endl;
        }
    }
}

//*******************         Problem 4           ********************/
void problem4(){
//Initialize Random number seed
    srand(static_cast<unsigned int> (time(0)));
    //Declare Variables
    int number = rand() % 100 + 1;
    int guess;
    int tries = 0;
    bool correct = false;
    //Prompt for input
    cout << "Let's play a guessing game!" << endl;
    cout << "I've chosen a number between 1 and 100." << endl;
    do {
        cout << "What number am I thinking of? ";
        cin>>guess;
        while (guess < 0 || 100 < guess) {
            cout << "Invalid Input. Enter your guess : ";
            cin>>guess;
        }
        if (number == guess) {
            cout << "That's correct!" << endl;
            correct = true;
        } else if (number < guess) {
            cout << "Too high, guess something lower." << endl;
        } else {
            cout << "Too low, guess something higher." << endl;
        }
        tries += 1;
    } while (!correct);
    cout << endl << "It took " << tries << " tries to guess " << number << "!" << endl;
}

//*******************         Problem 5           ********************/
void problem5(){
    int f = 5;
    for (int i = 0; i<f; i++){
        for (int o = 0; o<(f-i-1); o++){cout<<" ";}
        for (int u = 0; u<(2*i+1); u++){cout<<"*";}
        cout<<endl;
    }
    for (int i = 0; i<f-1; i++){
        for (int o = 0; o<=i; o++){cout<<" ";}
        for (int u = (2*f-2*i-3); u>0; u--){cout<<"*";}
        cout<<endl;
    }
}

//*******************         Problem 6           ********************/
void problem6(){
    //Declare Variables
    int current, days, future;
    float inc;
    //Prompt for input
    cout<<"This will predict the future population of organisms."<<endl<<endl;
    cout<<"What is the initial population? ";
    cin>>current;
    while (current<2){
        cout<<"Enter a population of two or more. ";
        cin>>current;
    }
    cout<<"What is the average daily population increase (xx.xx%)? ";
    cin>>inc;
    while (inc<0){
        cout<<"Enter a positive percentage. ";
        cin>>inc;
    }
    cout<<"How many days will they multiply? ";
    cin>>days;
    while (days<1){
        cout<<"Enter 1 or more days. ";
        cin>>days;
    }
    //Calculate future population
    future = current * pow(1 + inc/100, days);
    //Output data
    cout<<endl;
    cout<<"Current population                : "<<current<<endl;
    cout<<"Average daily population increase : "<<inc<<"%"<<endl;
    cout<<"Number of days to multiply        : "<<days<<endl;
    cout<<"Future population                 : "<<future<<endl;
}

//*******************         Problem 7           ********************/
void problem7(){
    //Declare Variables
    unsigned short a, b;
    //Prompt for inputs
    cout<<"Enter two numbers between 2 and 10."<<endl;
    cout<<"First input:  ";
    cin>>a;
    while (a<2 || 10<a){
        cout<<"Enter a value between 2 and 10. ";
        cin>>a;
    }
    cout<<"Second input: ";
    cin>>b;
    while (b<2 || 10<b){
        cout<<"Enter a value between 2 and 10. ";
        cin>>b;
    }
    //Output rectangle
    if (a<b) {
    for (int i = 0; i<a; i++){
        for (int u = 0; u<b; u++){
            cout<<"X";
        }
        cout<<endl;
    }
    }
    else if (b<a) {
    for (int i = 0; i<b; i++){
        for (int u = 0; u<a; u++){
            cout<<"X";
        }
        cout<<endl;
    }
    }
}

//*******************         Problem 8           ********************/
void problem8(){
    int f = 4;
    for (int i = 0; i<f; i++){
        int count=0;
        if(i==f-1){
          while (count<=7){
          cout<<"*";
          count += 1;
      }
        }
        else {
            while (count<=7){
          cout<<" ";
          count += 1;
      }
        }
        for (int u = 0; u<i*2+1; u++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i<f-1; i++){
        int count = 0;
      while (count<=7){
          cout<<" ";
          count += 1;
      }
      for (int u = (2*f-2*i-3); u>0; u--){cout<<"*";} 
      cout<<endl;
    } 
}

//*******************         Problem 9           ********************/
void problem9(){
    cout << "This program wil display an arrowhead on the screen.\n\n";

	// For first part
	for (int i = 0 ; i < 3 ; i++)
	{
		// For spaces
		int k = 0;
    
		while (k < 8)
		{
			cout << " ";
			k++; 
		}
		// For + sign
		for (int j = 0 ; j <= i ; j++)
		{
			cout << "+";
		}
		cout << endl;
	}
	// For second part
	for (int l = 0 ; l < 1 ; l++)
	{
		// For + sign
		for (int m = 0 ; m <= 11 ; m++)
		{
			cout << "+";
		}
		cout << endl;
	}
	// For third part
	for (int n = 3 ; n > 0 ; n--)
	{
		// For spaces
		int o = 8;

		while (o > 0)
		{
			cout << " ";
			o--;
		}
		// For + sign
		for (int p = n ; p > 0 ; p--)
		{
			cout << "+";
		}
		cout << endl;
	}
}
void problem10(){
    //Declare Variables
    unsigned short one, two, three;
    //Prompt for sale inputs
    cout<<"Enter sales rounded to the nearest hundreds of dollars."<<endl<<endl;
    cout<<"Enter today's sales for store 1: ";
    cin>>one;
    while (one<0){
        cout<<"Enter sales, not loss. ";
        cin>>one;
    }
    one /= 100;
    cout<<"Enter today's sales for store 2: ";
    cin>>two;
    while (two<0){
        cout<<"Enter sales, not loss. ";
        cin>>two;
    }
    two /= 100;
    cout<<"Enter today's sales for store 3: ";
    cin>>three;
    while (three<0){
        cout<<"Enter sales, not loss. ";
        cin>>three;
    }
    three /= 100;
    cout<<endl;
    //Output sales bar chart
    cout<<"Daily Sales"<<endl;
    cout<<"(each * = $100)"<<endl;
    cout<<"Store 1: ";
    for(int i = one; i>0; i--){
        cout<<"*";
    }
    cout<<endl;
    cout<<"Store 2: ";
    for(int i = two; i>0; i--){
        cout<<"*";
    }
    cout<<endl;
    cout<<"Store 3: ";
    for(int i = three; i>0; i--){
        cout<<"*";
    }
    cout<<endl;
}
void problem11(){
    //Declare Variables
    int nDays;
    double salary, total;

    //prompt user for input & validate
    cout << setw(39) << "* Pennies for Pay *\n";
    cout << setw(39) << "-------------------\n";
    cout << "Due to the new \"Penny Act\" proposed by the US Federal Government"
            ",\nyour salary will start out at 1 penny, and double for each day"
            "\nworked. This program will display your payment schedule.\n";
    cout << "\nPlease enter the number of days you plan to work: ";
    while (!(cin >> nDays) || (nDays < 0))
    {
        cout << "\nERROR: Days worked must be a nonnegative number: ";
        cin.clear();
        cin.ignore(1e9, '\n');
    }
    cout << endl;
    cout << setw(39) << "Day        Salary"<<endl;;
    cout << setw(39) << "---       --------"<<endl;;
    
    //Initialize "salary" and "total"
    salary = 0.01, total = 0;
       
    //Loop the number of days
    for (int i = 1; i <= nDays; i++)
    {   
        cout << setprecision(2) << fixed;
        cout << setw(22) << i << setw(10) << "$" << salary << endl;
        
        //Add all payments
        total += salary;
        
        //Double the salary each day
        salary *= 2;
    }
    
    //Output the total pay
    cout << "\nYour total amount earned over " << nDays << " days will be: $" 
         << total << endl;
    cout << "\n";
}
void problem12(){
    //Declare Variables
    const int SIZE = 80;
    char input[SIZE] = "";
    unsigned short totChng = 0, pTwnke = 350;
    char nQtrs, nDimes, nNikels;
    unsigned char another;
    
    //Prompt user for input
    cout << setw(46) << "* Deep-Fried Twinkie Vending Machine *\n";
    cout << setw(46) << "--------------------------------------\n";
    cout << "Try our new, delicious, deep-fried twinkies for only $3.50!\n"
            "Enter your change as: \"Dollar\", \"Quarter\", \"Dime\", and\n"
            "\"Nickel\"\n";
    cout << setprecision(2) << fixed;
    do
    {
        do
        {       
            cout << "\nInput coins/change: ";
            cin >> input;
            if (strcmp(input, "Dollar") == 0)
            {
                totChng += 100;
            }
            else if (strcmp(input, "Quarter") == 0)
            {
                totChng += 25;
            }
            else if (strcmp(input, "Dime") == 0)
            {
                totChng += 10;
            }
            else if (strcmp(input, "Nickel") == 0)
            {
                totChng += 5;
            }
            else
            {
                cout << "\nCoin not recognized!" << endl;
            }           
            cout << "\nTotal Change = $" << totChng / 100.0f << endl;
        } while (totChng < pTwnke);
    
        //Give Twinkie
        cout << "\n*Dispensing Fried-Twinkie*\n";

        //Calculate Change
        totChng -= pTwnke;
        cout << "\nYour change is: $" << totChng / 100.0f << endl;        

        //How many quarters
        nQtrs = totChng / 25;
        if (nQtrs > 0)
        {
           cout << static_cast<int>(nQtrs) << " Quarters Change" << endl;   
        }

        //How many dimes
        totChng -= nQtrs * 25;
        nDimes = totChng / 10;
        if (nDimes > 0)
        {
            cout << static_cast<int>(nDimes) << " Dimes Change" << endl;
        }

        //How many nickels
        totChng -= nDimes * 10;
        nNikels = totChng / 5;
        if (nNikels > 0)
        {
            cout << static_cast<int>(nNikels) << " Nickels Change" << endl;
        }
        cout << "Would you like to buy another? (Y/N) ";
        cin >> another;
    } while (another == 'Y' || another  == 'y');
    if (another != 'Y' || another != 'y')
    {
        cout << "\nEnjoy your Deep-Fried Twinkie!" << endl;
    }
}

void problem13(){
    //Declare Variables
    float vSpeed, hrs, dstance;

    //prompt user for input & validate
     cout << setw(43) << "* Distance Traveled *\n";
     cout << setw(43) << "---------------------\n";
     cout << "This program breaks up a vehicle's journey into intervals based"
             "\non the speed and amount of time traveled.\n";
     cout << "\nPlease enter the speed of the vehicle in miles per hour: ";
     while (!(cin >> vSpeed) || (vSpeed < 0))
     {
         cout << "\nERROR: Speed must be a nonnegative number: ";
         cin.clear();
         cin.ignore(1e9, '\n');
     }
     cout << "\nPlease enter the total time traveled in hours: ";
     while (!(cin >> hrs) || (hrs < 1))
     {
         cout << "\nERROR: Time traveled must be greater than 1 hour: ";
         cin.clear();
         cin.ignore(1e9, '\n');
     }
     cout << "\n";
     cout << setw(43) << "Hour   Distance Traveled\n";
     cout << setw(43) << "----   -----------------\n";
     
     //Loop to break the hours into intervals
     for (int i = 1; i <= hrs; i++)
     {
         //Calculate distance
         dstance = vSpeed * i;
         
         //Output the results
         cout << setw(21) << i << setw(14) << dstance << endl;
     }
     cout << "\n";
}
void problem14(){
    
}