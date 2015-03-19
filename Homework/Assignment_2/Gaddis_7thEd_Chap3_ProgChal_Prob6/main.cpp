/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Test Average
 * Created on March 18, 2015, 8:32 PM
 */

#include <iostream>

using namespace std;
//User Libraries

//System Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
        int average;
        int tScore1; 
        int tScore2; 
        int tScore3; 
        int tScore4;
        int tScore5;
    //Input Scores
        cout<<"Enter results for test 1:"<<endl;
        cin>>tScore1;
        cout<<"Enter results for test 2:"<<endl;
        cin>>tScore2;
        cout<<"Enter results for test 3:"<<endl;
        cin>>tScore3;
        cout<<"Enter results for test 4:"<<endl;
        cin>>tScore4;
        cout<<"Enter results for test 5:"<<endl;
        cin>>tScore5;
    //Calculate Test Scores
        average = (tScore1 + tScore2 + tScore3 + tScore4 + tScore5)/5;
    //Output Average of all Scores
        cout<<"The average for all 5 tests is "<<average<<"%"<<endl;

    return 0;
}

