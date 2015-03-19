/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Created on March 18, 2015, 6:22 PM
 * Purpose: Currency converter between USD, YEN, and EUR
 */

#include <iostream>
using namespace std;

//User Libraries

//System Libraries

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    //Global Constants
    float CONVDTY=.952;
    float CONVDTE=.7175;
    float nUSD;//Number of USD
    float nYENpd;//Number of Yen per dollar
    float nEURpd;//Number of Euro's per dollar
    //Prompt User for inputs
    cout<<"Enter the amount of USD here:"<<endl;
    cin>>nUSD;
    //Calculations begin here!
    nYENpd=nUSD*CONVDTY;
    nEURpd=nUSD*CONVDTE;
    cout<<"Here are the equivalent values in YEN and EUR"<<endl;
    cout<<nYENpd<<" YEN and "<<nEURpd<<" EUR"<<endl;
    //Exit Stage Right!
    return 0;
}

