/* 
 * File:   main.cpp
 * Author: Sheikh, Abdul Hakim
 *
 * Created on March 2, 2015, 9:03 AM
 *      Purpose: Free fall problem from Savitch
 */

//System Libraries

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G=3.2174e1f;//Acceleration in ft/sec^2
const float CNVFTMT=3.048e-1f;//Conversion from feet to meters

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float time, dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time x.xx (seconds)"<<endl;
    cin>>time;
    //Calculate the distance
    //dstnce=G*1/2*time*time;
    dstnce=static_cast<float>(1)/2*G*time*time;
    
    //Output the results
    cout<<"Distance fallen = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen = "<<dstnce*CNVFTMT<<"(meters)"<<endl;
    return 0;
}
