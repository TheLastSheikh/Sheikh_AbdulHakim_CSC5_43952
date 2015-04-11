/* 
 * File:   main.cpp
 * Author: The Sheikh
 * Purpose: Inflation Calculator
 * Created on April 10, 2015, 5:03 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
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
    }else cout<<"You moron! You can't do anything right! SIMPLE BASIC INSTRUCTIONS, BARNEY STYLE! FOLLOW THEM!"<<endl;
    return 0;
}

