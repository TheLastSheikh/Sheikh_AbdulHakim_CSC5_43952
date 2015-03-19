/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Created on March 18, 2015, 4:38 PM
 * Purpose: Calculate MPG
 */

#include <iostream>
using namespace std;
//User Libraries

//System Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare Variables
    float numGall;//Number of Gallons in a full tank
    float numMile;//Number of miles car can go on a full tank
    float mpg;//Mileage per gallon 
    
    //Prompt user for inputs and outputs
    cout<<"Enter number of gallons your car can hold in a full tank."<<endl;
    cin>>numGall;
    cout<<"Enter number of miles your car can travel on a full tank."<<endl;
    cin>>numMile;
    cout<<"Here is your MPG"<<endl;
    //Calculations begin here!
    mpg=numMile/numGall;
    cout<<mpg;
    
    return 0;
}

