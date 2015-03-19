/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Celsius to Fahrenheit
 * Created on March 18, 2015, 9:50 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    float fhrnht;//Temperature in Fahrenheit
    float celsius;//Temperature in Celsius
    //Prompt user for inputs
    cout<<"Enter the temperature in Celsius"<<endl;
    cin>>celsius;
    //Calculation begins here!
    fhrnht=static_cast<float>((celsius*9)/5)+32;
    cout<<"The temperature in Fahrenheit is "<<fhrnht<<" degrees"<<endl;
    //Exit Stage Right!
    return 0;
}

