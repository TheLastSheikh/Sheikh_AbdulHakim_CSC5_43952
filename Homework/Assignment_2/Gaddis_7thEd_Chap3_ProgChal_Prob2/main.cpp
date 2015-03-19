/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 * Created on March 18, 2015, 5:01 PM
 * Purpose: Calculate net income from ticket sales
 */

#include <iostream>
#include<iomanip>
using namespace std;

//System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    unsigned char classA=15;//Cost of Class A ticket
    unsigned char classB=12;//Cost of Class B ticket
    unsigned char classC=9;//Cost of class C ticket
    unsigned int nmClssA;//Number of Class A tickets sold
    unsigned int nmClssB;//Number of Class B tickets sold
    unsigned int nmClssC;//Number of Class C tickets sold
    float income;
    //Prompt User for outputs and inputs
    cout<<"Enter number of tickets sold in each class"<<endl;
    cout<<"Enter number of Class A tickets here:"<<endl;
    cin>>nmClssA;
    cout<<"Enter number of Class B tickets here:"<<endl;
    cin>>nmClssB;
    cout<<"Enter number of Class C tickets here"<<endl;
    cin>>nmClssC;
    //Calculations begin here
    cout<<fixed<<showpoint<<setprecision(2);
    income=(nmClssA*classA)+(nmClssB*classB)+(nmClssC*classC);
    cout<<"The total income generated from ticket sales is:"<<endl;
    cout<<"$"<<income;
    return 0;
}

