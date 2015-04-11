/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Larger Number
 * Created on April 10, 2015, 2:37 PM
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
//Declare Variables
unsigned int x,sum;
//Prompt user for inputs
cout<<"This will calculate sum of numbers from 1 to whatever you choose "<<endl;
cout<<"Please enter a number: ";
cin>>x;
if(x>0){
    while(x>0){
        sum+=x;
        x--;
       
    } cout<<sum<<endl;
}else cout<<"Invalid input"<<endl;
//Exit Stage Right!
    return 0;
}



