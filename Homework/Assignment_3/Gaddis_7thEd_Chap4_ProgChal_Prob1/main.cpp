/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose:
 * Created on March 30, 2015, 4:17 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
        float vrbl1, vrbl2;
    //Input Variables
        cout<<"Enter the first number: ";
        cin>>vrbl1;
        cout<<endl;
        cout<<"Enter the second number: ";
        cin>>vrbl2;
        cout<<endl;
    //Determine which number is larger and output results
        if (vrbl1 > vrbl2)
            cout<<vrbl1<<" is the larger than "<<vrbl2<<" ."<<endl;
        else if (vrbl1 < vrbl2)
            cout<<vrbl2<<" is the larger than "<<vrbl1<<" ."<<endl;
        else
            cout<<vrbl1<<" and "<<vrbl2<<" are equal."<<endl;
    //Exit Stage Right!
    return 0;
}

