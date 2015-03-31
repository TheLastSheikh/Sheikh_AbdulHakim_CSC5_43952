/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Body Mass Index Calculator
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
    float bmi, weight, height;
    //Prompt for Inputs
    cout<<"I will calculate your Body Mass Index and inform you of the status of your weight."<<endl;
    cout<<"Enter height in inches: ";
    cin>>height;
    cout<<"Enter weight in pounds: ";
    cin>>weight;
    cout<<endl;
    //Calculate BMI
    bmi = weight * (7.03e2f / (height * height));
    //Tell user of their BMI and their weight status
    if ((bmi >= 1.85e1f)&&(bmi <= 2.5e1f))
        cout<<"Your BMI is "<<bmi<<" ... you are at an optimal weight."<<endl;
    else if (bmi < 1.85e1f)
        cout<<"Your BMI is "<<bmi<<" ... you are emaciated."<<endl;
    else
        cout<<"Your BMI is "<<bmi<<" ... you are obese."<<endl;
    return 0;
}