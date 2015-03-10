/* 
 * File:   main.cpp
 * Author: Sheikh
 * Purpose: To write program in display
 * Created on March 9, 2015, 4:28 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    int fncLngt,fncWdt,permtr;//Length of Fence, Width of Fence, Perimeter of Fence
    
    cout<<"Hello"<<endl;
    cout<<"Press enter after entering a number \n"<<endl;
    cout<<"Enter the length of the fence in ft \n"<<endl;
    cin>>fncLngt;
    cout<<"Enter the width of the fence in ft"<<endl;
    cin>>fncWdt;
    permtr=(2*fncLngt)+(2*fncWdt);
    cout<<"If you have "<<(fncLngt)<<" ft of fence lengthwise \n"<<endl;
    cout<<"and "<<endl;
    cout<<fncWdt<<endl;
    cout<<" ft of fence widthwise, then \n"<<endl;
    cout<<"you have "<<endl;
    cout<<permtr<<endl;
    cout<<" ft of fence total"<<endl;
    cout<<"Good-Bye"<<endl;
    return 0;
}


