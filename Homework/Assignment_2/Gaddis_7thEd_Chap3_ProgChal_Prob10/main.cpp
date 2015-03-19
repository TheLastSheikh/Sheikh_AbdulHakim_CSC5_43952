/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Cookie Calories 
 * Created on March 18, 2015, 6:56 PM
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
    unsigned char numCook=40;//Number of cookies in a bag
    unsigned char calpCook=30;//Number of calories per cookie
    float totCal;
    //Prompt user for inputs
    cout<<"How many cookies have you eaten?"<<endl;
    cin>>numCook;
    //Calculations begin here
    totCal=static_cast<float>(numCook)*calpCook;
    cout<<"The total number of calories you have consumed from eating these cookies is:"<<endl;
    cout<<totCal<<" Calories"<<endl;
    //Exit Stage Right!
    return 0;
}

