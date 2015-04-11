/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Purpose: Calculate Distance
 * Created on April 4, 2015, 7:34 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>

//User Libraries

//Global Constants

//Global Constants

//Function Prototypes


using namespace std;


int main(int argc, char** argv) {
//Declare Variables
    unsigned int speed,time,dstnce,num;
    num=1;
//Inputs begin here
    cout<<"What is the speed of the vehicle?"<<endl;
    cin>>speed;
    cout<<"What is the amount of time in hours the vehicle traveled?"<<endl;
    cin>>time;
//Calculations begin here
    while(num<=time){
        dstnce+=speed;
        cout<<"The distance traveled on hour "<<num<<" is "<<dstnce<<" miles"<<endl;
        num++;
    }
        
    
    return 0;
}

