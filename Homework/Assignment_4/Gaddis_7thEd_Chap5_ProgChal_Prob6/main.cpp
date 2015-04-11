/* 
 * File:   main.cpp
 * Author: The Sheikh
 * Purpose: Ocean Level Risen
 * Created on April 10, 2015, 4:32 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//User Libraries

//Execution begins here!

int main(int argc, char** argv) {
//Declare variables
    float rLvl,num;
    num=1;
    while(num<=25){
        rLvl+=3.1;
        cout<<"The ocean level in "<<num<<" years, will rise "<<rLvl<<" mm"<<endl;
        num++;
    }
    return 0;
}

