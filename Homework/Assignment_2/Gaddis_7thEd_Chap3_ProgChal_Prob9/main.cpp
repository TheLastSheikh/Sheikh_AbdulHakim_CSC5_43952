/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: How many widgets
 * Created on March 18, 2015, 8:06 PM
 */

#include <iostream>
using namespace std;

//System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    float wdgtWgt=9.2;//Weight of one Widget in lbs
    float pallWgt;//Weight of pallet
    float totlWgt;//Total weight
    float nmbrWgt;//Number of widgets
    //Prompt user for inputs
    cout<<"What is the weight of the total weight of the pallet?"<<endl;
    cin>>totlWgt;
    cout<<"What is the weight of just the pallet?"<<endl;
    cin>>pallWgt;
    //Calculations begin here!
    nmbrWgt=(totlWgt-pallWgt)/wdgtWgt;
    //Output results here
    cout<<" "<<endl;
    cout<<static_cast<int>(nmbrWgt)<<" widgets on the pallet"<<endl;
    //Exit Stage Right
    return 0;
}

