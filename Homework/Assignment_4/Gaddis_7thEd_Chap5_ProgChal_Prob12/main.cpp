/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: The greatest and smallest numbers
 * Created on April 10, 2015, 5:41 PM
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    //Input
    cout << "How many numbers would you like to enter?" << endl;
    cin >> num;
    cout << "You would like to enter "<< num <<" numbers"<<endl;
    cout << "Please enter your numbers: "<<endl;
    //Output
    int highNum;
    cin >> highNum;// save 1st value as highest
    int inNum;// for reading the rest of the values
    //Looping
    for(int i = 2; i <= num; ++i )
    {
        cin >> inNum;
        if( inNum > highNum )//Compare to highest
            highNum = inNum;//Replace highest
    }
    cout << "The highest number entered was: " << highNum;
    //Exit Stage Right!
    return 0;
}

