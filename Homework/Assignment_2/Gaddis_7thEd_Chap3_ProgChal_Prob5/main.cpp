/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Created on March 18, 2015, 5:58 PM
 * Purpose: Find batting average of a sportsman
 */

#include <iostream>
#include <iomanip>
using namespace std;

//System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    unsigned int numBat;//Number of times player has batted
    unsigned int numHits;//Number of hits player got
    float batAvrg;
    //Prompt user for inputs and outputs
    cout<<"Enter number of games player has batted in here:"<<endl;
    cin>>numBat;
    cout<<"Enter number of hits player has gotten here:"<<endl;
    cin>>numHits;
    //Calculations begin here!
    batAvrg=static_cast<float>(numHits)/numBat;
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"Here is the batting average for the player:"<<endl;
    cout<<batAvrg<<" hits per game"<<endl;
    //Exit Stage Right!
    return 0;
}

