/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: 
 * Created on March 30, 2015, 4:24 PM
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
        unsigned short nChecks;//Number of checks
        float bnkFees;//Total bank fees
    //Prompt for Inputs
        cout<<"Given the amount of checks you have written during the last month, I "
            <<"will calculate your bank fees"<<endl;
        cout<<endl;
        cout<<"Enter the number of checks you have written this month: ";
        cin>>nChecks;
    //Set fixed decimal for dollars
        cout<<fixed<<showpoint<<setprecision(2);
    //Determine bank fees
        if ((nChecks >= 0)&&(nChecks < 20))
            bnkFees = 10 + (nChecks * 1e-1f);
        else if ((nChecks >= 20)&&(nChecks <= 39))
            bnkFees = 10 + (nChecks * 8e-2f);
        else if ((nChecks >= 40)&&(nChecks <= 59))
            bnkFees = 10 + (nChecks * 6e-2f);   
        else if (nChecks >= 60)
            bnkFees = 10 + (nChecks * 4e-2f);
        else if (nChecks < 0)
            cout<<"Invalid Input"<<endl;
    //Output results
        cout<<"This month you are being charged $"<<bnkFees<<endl;
    return 0;
}

