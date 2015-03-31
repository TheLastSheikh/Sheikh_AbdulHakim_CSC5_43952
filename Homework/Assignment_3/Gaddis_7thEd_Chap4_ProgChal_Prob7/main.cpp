/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Calculate time by seconds
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
        int time;//Time input in seconds
        float days, hours, min;//Adjustment for seconds
    //Collect inputs
        cout<<"Enter a value of time in seconds, and it will be converted as"<<endl;
        cout<<"necessary, to the appropriate units in days, hours, or minutes."<<endl;
        cout<<"Enter time in seconds: ";
        cin>>time;
    //Decide whether to convert or leave unchanged
        if (time >= 8.64e4f){
            days = time / 8.64e4f;
            cout<<"Time = "<<days<<" day(s)"<<endl;
        }
        else if ((time >= 3.6e3f)&&(time < 8.64e4f)){
            hours = time / 3.6e3f;
            cout<<"Time = "<<hours<<" hour(s)"<<endl;
        }
        else if ((time >= 6e1f)&&(time < 3.6e3f)){
            min = time / 6e1f;
            cout<<"Time = "<<min<<" minute(s)"<<endl;
        }
        else
            cout<<"Time = "<<time<<" second(s)";
        cout<<"Life is long if you count every second!"<<endl;
    return 0;
}
