/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Interest calculator
 * Created on March 18, 2015, 7:39 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    float prncpl, rate, time, total;
    //Prompt user for inputs
    cout<<"It seems you have decided to take a loan from my company. Don't worry, we will calculate your interest."<<endl;
    cout<<"Firstly, how much have you borrowed from us?"<<endl;
    cin>>prncpl;
    cout<<"What is your interest rate?"<<endl;
    cin>>rate;
    cout<<"How many times will this interest compound per year"<<endl;
    cin>>time;
    //Calculations begin here
    total=prncpl*pow(((rate*1.0e-2/time)+1),time);
    //output
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"You owe us a total of "<<endl;
    cout<<total;
    cout<<" Thank you!"<<endl;
    //Exit stage right
    return 0;
}

