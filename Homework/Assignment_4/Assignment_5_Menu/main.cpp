/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Assignment 5 Menu
 * Created on April 10, 2015, 4:40 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//General Menu Format
    //Display the selection
        cout<<"Type 0 to solve Problem 2"<<endl;
        cout<<"Type 1 to solve Problem 3"<<endl;
        cout<<"Type 2 to solve Problem 4"<<endl;
        cout<<"Type 3 to solve Problem 5"<<endl;
        cout<<"Type 4 to solve Problem 6"<<endl;
        cout<<"Type 5 to solve Problem 7"<<endl;
        cout<<"Type 6 to solve Problem 8"<<endl;
        cout<<"Type 7 to solve Problem 9"<<endl;
        cout<<"Type 8 to solve Problem 12"<<endl;
        cout<<"Type 9 to solve Problem 14"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cout<<"I would like to solve a problem"<<endl;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '0':{
                    //Declare Variables
                unsigned int x,sum;
                //Prompt user for inputs
                cout<<"This will calculate sum of numbers from 1 to whatever you choose "<<endl;
                cout<<"Please enter a number: ";
                cin>>x;
                if(x>0){
                    while(x>0){
                        sum+=x;
                        x--;

                    } cout<<sum<<endl;
                }else cout<<"Invalid input"<<endl;

                    break;
                }
                case '1':{
                    //Declare Variables
                    unsigned int speed,time,dstnce,num;
                    num=1;
                //Inputs begin here
                    cout<<"What is the speed of the vehicle?"<<endl;
                    cin>>speed;
                    cout<<"What is the amount of time in hours the vehicle traveled?"<<endl;
                    cin>>time;
                //Calculations begin here
                    while(num<=time){
                        dstnce+=speed;
                        cout<<"The distance traveled on hour "<<num<<" is "<<dstnce<<" miles"<<endl;
                        num++;
                    }

                    break;
                }
                case '2':{
                    float fhrnht;//Temperature in Fahrenheit
                    float celsius;//Temperature in Celsius
                    celsius = 0;
                    //Calculation begins here with a loop!
                    while (celsius <= 20){
                    fhrnht=static_cast<float>((celsius*9)/5)+32;
                    cout<<"When the temperature in celsius "<<celsius<<" the temperature in fahrenheit is"<<fhrnht<<" degrees"<<endl;
                    celsius++;
                    }
                    break;
                }
                case '3':{
                    //Global Constants
                    float KMTM=.6214;
                    //Declare Variables
                    unsigned int kph;
                    kph=60;//Starts at 60 KPH
                    float mph;
                    //Loop
                    while (kph<=130){
                             mph=kph*KMTM;
                    cout<<"At "<<kph<<" kilometers per hour, you are traveling at "<<mph<<" miles per hour"<<endl;
                    kph+=5;//At 5 km intervals
                    }
                    break;
                }
                case '4':{
                   //Declare variables
                    float rLvl,num;
                    num=1;
                    while(num<=25){
                        rLvl+=3.1;
                        cout<<"The ocean level in "<<num<<" years, will rise "<<rLvl<<" mm"<<endl;
                        num++;
                    }
                    break;                  
                }
                case '5':{
                    //Declare Variables
                    unsigned int days, number;
                    float penny, salary;
                    penny = 1e-2;
                    number = 1;
                    //Prompt for inputs
                    cout<<"How many days did you work this month? ";
                    cin>>days;
                    //Set for dollars precision
                    cout<<fixed<<showpoint<<setprecision(2);
                    //Loop
                    if (days>=0 && days<=31){
                        while (number <= days){
                            cout<<"On day "<<number<<" you made "<<penny<<" dollars"<<endl;
                            salary += penny;
                            penny *= 2;
                            number++;
                        }
                        cout<<"Your total salary for this month is "<<salary<<endl;
                    }
                    else cout<<"The value you have entered is outside the parameters of a month. Please try again.";

                    break;                   
                }
                case '6':{
                   //Declare Variables
                    int calories = 3.9; 
                    int calburn;
                    //Output
                    for (int minutes = 10; minutes < 30; minutes += 5){
                        calburn= calories * minutes;
                       cout<<"Calories burned in "<<minutes<<" minutes: "<<calburn<<endl; 
                    }
                    break;
                }  
                case '7':{
                   //Declare Variables
                    int n;
                    float cost = 2500, inc = 1.04;
                    //Input
                    cout<<fixed<<showpoint<<setprecision(2);
                    //Loop
                    for (n=1; n<=6; n++){
                        cost*=inc;
                        cout<<"Year: "<<n<<" Cost: "<<cost<<endl;
                    }
                    break;
                }
                case '8':{
                   //Declare Variables
                    int num;
                    //Input
                    cout << "How many numbers would you like to enter?" << endl;
                    cin >> num;
                    cout << "You would like to enter "<< num <<" numbers"<<endl;
                    cout << "Please enter your numbers: "<<endl;
                    //Output
                    int highNum;
                    cin >> highNum;// save 1st value as highest
                    int inNum;// for reading the rest of the values
                    //Looping
                    for(int i = 2; i <= num; ++i )
                    {
                        cin >> inNum;
                        if( inNum > highNum )//Compare to highest
                            highNum = inNum;//Replace highest
                    }
                    cout << "The highest number entered was: " << highNum;
                    break;
                }
                 case '9':{
                     //Declare Variables
                    float money,infl,rate,num;//Money, Inflation rate, Inflation rate adjusted as a percentage/Year1
                    num=1;
                    money=1000;
                    cout<<"Enter the yearly inflation rate as a percentage between 1 and 15"<<endl;
                    cin>>infl;
                    rate=infl/100;
                    rate=1-rate;
                    cout<<fixed<<showpoint<<setprecision(2);
                    if(infl<=15 && infl>=1){
                    while(num<=10){

                        money*=rate;
                        cout<<"The purchasing power for year "<<num<<" is "<<money<<" dollars"<<endl;
                        num++;
                    }
                    }else cout<<"Invalid Input"<<endl;
                    break;
                }
                default:{
                    cout<<"Exit?"<<endl;
                }
        }
    return 0;
}

