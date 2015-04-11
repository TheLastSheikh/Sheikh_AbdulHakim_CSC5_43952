/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Celsius to Fahrenheit
 * Created on April 10, 2015 at 3:29 PM
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
    float fhrnht;//Temperature in Fahrenheit
    float celsius;//Temperature in Celsius
    celsius = 0;
    //Calculation begins here with a loop!
    while (celsius <= 20){
    fhrnht=static_cast<float>((celsius*9)/5)+32;
    cout<<celsius<<" degrees celsius is equal to "<<fhrnht<<" degrees fahrenheit"<<endl;
    celsius++;
    }
    //Exit Stage Right!
    return 0;
}