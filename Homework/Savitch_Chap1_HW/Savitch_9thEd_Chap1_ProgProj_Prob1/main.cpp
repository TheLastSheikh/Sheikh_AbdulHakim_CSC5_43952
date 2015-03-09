/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Output Sum and Product
 *
 * Created on March 4, 2015, 10:02 AM
 */

#include <iostream>
using namespace std;

//System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    int x,y,product,sum;//Two numbers with which sum and product will be taken
    //Input Assigned Values
    cout<<"Input 2 numbers "<<endl;
    cin>>x;
    cin>>y;
    //Process/Calculate
    sum=x+y;
    product=x*y;
    //Output Everything
    cout<<"Sum of two numbers"<<endl;
    cout<<"Sum="<<sum<<endl;
    cout<<"Product of two numbers"<<endl;
    cout<<"Product="<<product<<endl;
    return 0;
}