/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Monthly Costs
 * Created on March 18, 2015, 7:15 PM
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
    float mrtgage;//Monthly mortgage payment
    float utlties;//Monthly utility bill
    float phnbill;//Monthly phone bill
    float cable;//Monthly cable bill
    float total;
    //Prompt user for amounts
    cout<<"How much is your monthly mortgage payment?"<<endl;
    cin>>mrtgage;
    cout<<"How much do you pay in utilities every month?"<<endl;
    cin>>utlties;
    cout<<"How much is your monthly phone bill?"<<endl;
    cin>>phnbill;
    cout<<"Why do you still use cable, and how much do you pay?"<<endl;
    cin>>cable;
    cout<<"Your monthly expenses total is:"<<endl;
    //Calculations begin here!
    total=mrtgage+utlties+phnbill+cable;
    //Output the results
    cout<<"$"<<total<<" per month"<<endl;
    cout<<"Your aggregate annual expenses are:"<<endl;
    cout<<"$"<<total*12;
    //Exit Stage Right!
    return 0;
}

