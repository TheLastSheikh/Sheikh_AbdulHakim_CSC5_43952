/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Speed Conversion Chart
 * Created on April 10, 2015, 4:25 PM
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants
float KMTM=.6214;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
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
   
    //Exit stage right
    return 0;
}
