/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Gravitational force based on Mass
 * Created on March 30, 2015, 4:24 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float CONVMTW = 9.8f;//Converts Mass in kg to Weight in N
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mass, weight;//Input and output
    //Prompt user for weight in kg
    cout<<"In order to calculate the weight of an object in Newtons and determine if it is"
        <<" too heavy or too light, one must"<<endl;
    cout<<"Enter mass in kilograms as XXX.XX: ";
    cin>>mass;
    //Calculate Weight
    weight = mass * CONVMTW;
    //Output weight and notify user to weight status
    cout<<"The objects weight in Newtons is "<<weight<<" and ";
    if (weight < 10)
        cout<<"the object is too light";
    else if (weight > 1000)
        cout<<"the object is too heavy";
    else
        cout<<"the object is optimal weight";
    return 0;
}