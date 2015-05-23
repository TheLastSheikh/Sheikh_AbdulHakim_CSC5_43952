/* 
 * File:   main.cpp
 * Author: TheSheikh
 * Purpose: Drink Machine Simulator
 * Created on May 22, 2015, 9:53 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Drink {
    string name;
    float  cost;
    int number;
};
class Fountain{
private:
    int inputMoney (int choice){
        float x;
        cin>>x;
        while (x < bev[choice].cost){
            cout<<"Not enough money"<<endl;
            cin>>x;
        }
        return x; 
    }
    void dailyReport (){
        cout<<"The total sale are "<<endl;
        cout<<total;
    }
public:
    Drink *bev;
    int num;
    float total;
    Fountain(Drink* stuff, int fish){
        bev = stuff;
        num=fish;
        total = 0;
        
    }
    ~Fountain(){dailyReport();}
    void displayChoices(){
        for(int i=0; i<num; i++){
            cout<<i+1<<" "<<bev[i].name<<" "<<bev[i].cost<<endl;
        }
    }
    int buyDrink(){
        int choice;
        cout<<"Which drink would you like to buy?"<<endl;
        displayChoices();
        cout<<"Type a number"<<endl;
        cin>>choice;
        while (choice <1 || choice >num){
            cout<<"Invalid Input"<<endl;
            cin>>choice;
        }
        choice -= 1;
        cout<<"Give me your money."<<endl;
        float money = inputMoney(choice);
        total += bev[choice].cost;
        cout<<"Here is your change!"<<endl;
        cout<<"$"<<money - bev[choice].cost<<endl;
    }

};
        
int main(int argc, char** argv) {
    Drink type[5] = {"Cola", 0.75, 20, "Root Beer", 0.75, 20, "Orange Soda", 0.75, 20, "Grape Soda", 0.75, 20, "Water", 1.00, 20};
    Fountain fountain(type, 5);
    //fountain.displayChoices();
    //fountain.buyDrink();
    while (true) {
        char z;
        cout<<"Do you want to buy a drink? Y for yes, N for no: "<<endl;
        cin >> z;
        while(z != 'Y' && z != 'N'){
            cout<<"Invalid Input"<<endl;
            cin>>z;
        }
        if (z == 'Y'){
            fountain.buyDrink();
        }
        else {
            break;
        }
    }
    
    return 0;
}

