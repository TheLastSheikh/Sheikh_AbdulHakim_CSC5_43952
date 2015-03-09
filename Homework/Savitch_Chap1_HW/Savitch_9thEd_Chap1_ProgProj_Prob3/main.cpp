/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Change Calculator
 *
 * Created on March 8, 2015, 8:56 PM
 */

//User Libraries

//Function Prototypes


#include <iostream>

using namespace std;

//Global constants
unsigned char qrtr=25;
unsigned char dime=10;
unsigned char nickl=5;

//Execution Begins Here!

int main(int argc, char** argv) {
//Declare Variables
    unsigned int x,y,z,qvalue,dvalue,nvalue;
    float total,dtotal;
    //Prompt Quarter Amount
    cout<<"Number of Quarters"<<endl;
    cout<<"Input Value as xxx."<<endl;
    cin>>x;
    //Prompt Dime Amount
    cout<<"Number of Dimes"<<endl;
    cout<<"Input Value as xxx"<<endl;
    cin>>y;
    //Prompt Nickel Amount
    cout<<"Number of Nickels"<<endl;
    cout<<"Input Value as xxx."<<endl;
    cin>>z;
    //Calculations begin here!
    qvalue=qrtr*x;//Value in quarters
    dvalue=dime*y;//Value in dimes
    nvalue=nickl*z;//Value in nickels
    total=qvalue+dvalue+nvalue;//Total value in cents
    cout<<"You have "<<total<<" cents"<<endl;
    
    return 0;
}

