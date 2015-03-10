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
    int number_of_pods,peas_per_pod,total_peas;
    
    cout<<"Press enter after entering a number \n"<<endl;
    cout<<"Enter the number of pods. \n"<<endl;
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod"<<endl;
    cin>>peas_per_pod;
    total_peas=number_of_pods*peas_per_pod;
    cout<<"If you have "<<(number_of_pods)<<" pea pods \n"<<endl;
    cout<<"and "<<endl;
    cout<<peas_per_pod<<endl;
    cout<<" peas in each pod, then \n"<<endl;
    cout<<"you have "<<endl;
    cout<<total_peas<<endl;
    cout<<" peas in all the pods"<<endl;
    
    return 0;
}

