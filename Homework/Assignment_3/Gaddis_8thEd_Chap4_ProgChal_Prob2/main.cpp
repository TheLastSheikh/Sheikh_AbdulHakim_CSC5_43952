/* 
 * File:   main.cpp
 * Author: Sheikh
 * Purpose: Roman Numeral Conversion
 * Created on March 25, 2015, 9:59 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
//Declare Variables
    
    int amNumb;
    
    cout<<"What number between 1 and 10 would you like to convert?"<<endl;
    cin>>amNumb;
    if((amNumb<1)||(amNumb>10)){cout<<"you suck"<<endl;}
    else{
    cout<<"The Roman numeral is "<<endl;
    switch(amNumb){
        case 1:
            cout<<"i"<<endl;
            break;
        case 2:
            cout<<"ii"<<endl;
            break;
        case 3:
            cout<<"iii"<<endl;
            break;
        case 4:
            cout<<"iv"<<endl;
            break;
        case 5:
            cout<<"v"<<endl;
            break;
        case 6:
            cout<<"vi"<<endl;
            break;
        case 7:
            cout<<"vii"<<endl;
            break;
        case 8:
            cout<<"viii"<<endl;
            break;
        case 9:
            cout<<"ix"<<endl;
            break;
        case 10:
            cout<<"x"<<endl;
            break;
        default:
            cout<<"Incorrect input"<<endl;
    }
    }
    
    return 0;
}
