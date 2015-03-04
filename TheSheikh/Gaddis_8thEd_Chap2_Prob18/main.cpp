/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Energy Drink Survey     
 * Created on March 4, 2015, 8:20 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short nCust, nEDrnks, nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //Input/Assigned Values
    nCust=16500; // Number of Customers
    pEDrnks=15; //Percentage of Energy Drinkers
    pCDrnks=58; //Percentage out of Energy Drinkers that are Citrus Drinkers
    //Process/calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout<<"Customer Survey Problem"<<endl;
    cout<<"Number of customers = "<<nCust<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Percentage Energy Drinkers = "<<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage of Citrus Drinkers/Energy Drinkers = "<<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    return 0;
}

