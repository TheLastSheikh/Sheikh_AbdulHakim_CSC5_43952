/* 
 * File:   main.cpp
 * Author: TheSheikh
 *
 * Created on June 7, 2015, 5:27 PM
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>  //Output Formatting
#include <cmath>    //C Math
using namespace std;
//User Libraries

//Global Constants
float GRAVITY = 9.8f;
//Function Prototypes
void problem0();                        
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare menu variable choice
        char choice;
    //Repeat the menu
        do{
            //Display the selection
                cout<<"***********************************************************"<<endl;
                cout<<"* To solve problem 1,  type 0 (Markup)                    *"<<endl;
                cout<<"* To solve problem 2,  type 1 (Celsius Temperature Table) *"<<endl;
                cout<<"* To solve problem 3,  type 2 (Falling Distance)          *"<<endl;
                cout<<"* To solve problem 4,  type 3 (Kinetic Energy)            *"<<endl;
                cout<<"* To solve problem 5,  type 4 (Winning Division)          *"<<endl;
                cout<<"* To solve problem 6,  type 5 (Safest Driving Area)       *"<<endl;
                cout<<"* To solve problem 8,  type 6 (Star Search)               *"<<endl;
                cout<<"* To solve problem 10, type 7 (Present Value)             *"<<endl;
                cout<<"* To solve problem 11, type 8 (Stock Profit)              *"<<endl;
                cout<<"* To solve problem 15, type 9 (Overloaded Hospital)       *"<<endl;
                cout<<"* Type anything else to quit with no solutions.           *"<<endl;
                cout<<"***********************************************************"<<endl;
            //Read the choice
                cout<<"Solve : "; cin>>choice;
                cout<<endl;
                cout<<endl;
            //Solve a problem that has been chosen.
                switch(choice){
                    case '0':problem0();break;
                    case '1':problem1();break;
                    case '2':problem2();break;
                    case '3':problem3();break;
                    case '4':problem4();break;
                    case '5':problem5();break;
                    case '6':problem6();break;
                    case '7':problem7();break;
                    case '8':problem8();break;
                    case '9':problem9();break;
                    default :cout<<"Exit?"<<endl;};
        }while(choice>='0'&&choice<='9');
        cout<<endl;
    //Exit Stage right
    return 0;
}

//*******************         Problem 0           ********************/
float calcRet(float wCost, float markup){
    float rPrice;//Retail Price
    markup /= 100;//Convert % to decimal
    rPrice = (wCost + (wCost * markup));//Calculate Retail Price
    return rPrice;}
void problem0(){
    //Declare Variables
        float wCost,//Wholesale Cost
              markup,//Markup %
              rPrice;//Retail Price
    //Prompt for Inputs
        cout<<"Enter the wholesale cost and the mark up percentage (don't include '%')"<<endl;
        cout<<"Wholesale Cost : ";
        cin>>wCost;
        while (wCost < 0) {cout<<"Enter a positive value. Wholesale Cost : ";
                           cin>>wCost;                      }
        cout<<"Markup         : ";
        cin>>markup;
         while (markup < 0) {cout<<"Enter a positive value. Markup       : ";
                           cin>>markup;}
        cout<<endl;
    //$ Formatting
        cout<<fixed<<setprecision(2)<<showpoint;
    //Output Retail Price
        cout<<"If an item's wholesale cost is "<<wCost<<" and its markup percentage"
            <<" is "<<markup<<"%, then the items retail price is $"<<calcRet(wCost, markup)<<endl;
        cout<<endl;     }

//*******************         Problem 1           ********************/
float celsius(int f) {
    float celsius;
    celsius = (static_cast<float>(5)*(f-32))/9;
    return celsius;}
void problem1(){
    //Declare Variables
        int f;//Fahrenheit
    //Loop Output x20
        cout<<"Fahrenheit = Celsius"<<endl;
        for (f=0; f<=20; f++) {cout<<setw(10)<<right<<f<<" = ";
                               cout<<celsius(f)<<endl;}
        cout<<endl;                                             }


//*******************         Problem 2           ********************/
float fallDis(int t) {
    float distnce;
    distnce = (.5f * GRAVITY * (pow(t,2)));//Calculate Distance Fallen
    return distnce;     }
void problem2(){
    //Declare Variables
        int t;//Time in Seconds
    //Loop Output x10
        for (t=1; t<=10; t++) {cout<<"At "<<t<<" seconds, the object has fallen ";
                               cout<<fallDis(t)<<" meters"<<endl;}   
                               cout<<endl; 
                               cout<<endl;      }

//*******************         Problem 3           ********************/
float kEnergy(float mass, float velocty) {
    float ke;//Kinetic Energy
    ke = (.5f * mass * (pow(velocty,2)));//Calculate Kinetic Energy
    return ke;      }
void problem3(){
    //Declare Variables
        float mass, velocty;
    //Prompt for Inputs
        cout<<"Given mass and velocity, I will calculate kinetic energy."<<endl;
        cout<<"Mass     (kg) : ";
        cin>>mass;
        cout<<"Velocity (m/s): ";
        cin>>velocty;
    //Call kEnergy
        cout<<"The kinetic energy of "<<mass<<" kg travelling at "<<velocty<<" m/s ";
        cout<<"is "<<kEnergy(mass, velocty)<<" joules."<<endl;
}

//*******************         Problem 4           ********************/
float getSale(float x) {
    cout<<"Enter your quarterly sales $";
    cin>>x;//Validation Placeholder
    while (x<0) {cout<<"Enter a positive value $";
                 cin>>x;                                            }
    return x;   }
float highSal(float ne, float nw, float se, float sw) {
    float top;//Highest Earners
    top = ne;
    if (nw > top) {top = nw;}
    if (se > top) {top = se;}
    if (sw > top) {top = sw;}    
    return top;
}

void problem4(){
    //Declare Variables
        float ne, nw, se, sw, x, top;
    //Prompt User for Inputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Enter the quarterly sales for each branch."<<endl;
        cout<<"Northeast : ";
        ne = getSale(x);
        cout<<"Northwest : ";
        nw = getSale(x);
        cout<<"Southeast : ";
        se = getSale(x);
        cout<<"Southwest : ";
        sw = getSale(x);
        cout<<endl;
    //Output Results
        top = highSal(ne, nw, se, sw);
        if (top == nw) {cout<<"Northwest has the highest sales at $"<<nw<<endl;}
        if (top == ne) {cout<<"Northeast has the highest sales at $"<<ne<<endl;}
        if (top == sw) {cout<<"Southwest has the highest sales at $"<<sw<<endl;}
        if (top == se) {cout<<"Southeast has the highest sales at $"<<se<<endl;}
        cout<<endl<<endl;                                                      }

//*******************         Problem 5           ********************/
int getNAcc(float x) {
    cout<<"Enter total number of reported accidents last year : ";
        cin>>x;//Validation Placeholder
        while (x<0) {cout<<"Please enter a non-negative value. ";
                     cin>>x;                                            }
    return x;   }
int lowRegi(int n, int e, int s, int w, int c) {
    int low = n;//Lowest Area
    if (e < low) {low = e;}
    if (s < low) {low = s;}
    if (w < low) {low = w;}
    if (c < low) {low = c;}  
    return low;     }
void problem5(){
    //Declare Variables
    int n,//North
        e,//East
        s,//South
        w,//West
        c,//Central
        x,//Input Validation
        low;//Lowest Region
    //Prompt for Inputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Enter number of reported traffic accidents in the last year."<<endl;
        cout<<"North   ";
        n = getNAcc(x);
        cout<<"East    ";
        e = getNAcc(x);
        cout<<"South   ";
        s = getNAcc(x);
        cout<<"West    ";
        w = getNAcc(x);
        cout<<"Central ";
        c = getNAcc(x);
        cout<<endl;
    //Output Results
        low = lowRegi(n, e, s, w, c);
        if (low == n) {cout<<"The North region has the fewest reported accidents";
                       cout<<"totaling "<<n<<" in the last year"<<endl;           }
        if (low == e) {cout<<"The East region has the fewest reported accidents";
                       cout<<"totaling "<<e<<" in the last year"<<endl;           }
        if (low == s) {cout<<"The South region has the fewest reported accidents";
                       cout<<"totaling "<<s<<" in the last year"<<endl;           }
        if (low == w) {cout<<"The West region has the fewest reported accidents";
                       cout<<"totaling "<<w<<" in the last year"<<endl;           }
        if (low == c) {cout<<"The Central region has the fewest reported accidents";
                       cout<<"totaling "<<c<<" in the last year"<<endl;           }
}

//*******************         Problem 6           ********************/
float getJsco(float x) {
    cout<<"Enter your score (1-10) : ";
    cin>>x;//Validation Placeholder
    while (x<0 || 10<x) {cout<<"          Please Enter a value 1-10 : ";
                 cin>>x;                                            }
    return x;   }
float calSco(float j1, float j2, float j3, float j4, float j5) {
    //Determine Highest Score
        float high = j1;//Highest Score
        if (j2 > high) {high = j2;}
        if (j3 > high) {high = j3;}
        if (j4 > high) {high = j4;}
        if (j5 > high) {high = j5;}
    //Determine Lowest Score
        int low = j1;//Lowest Area
        if (j2 < low) {low = j2;}
        if (j3 < low) {low = j3;}
        if (j4 < low) {low = j4;}
        if (j5 < low) {low = j5;}
    //Calculate Average Score
        float score;//Average Score
        score = j1 + j2 + j3 + j4 + j5;
        score -= high + low;
        score /= 3;
        return score;
}
void problem6(){
    //Declare Variables
    float j1,//Judge 1
          j2,//Judge 2
          j3,//Judge 3
          j4,//Judge 4
          j5,//Judge 5
           x,//Input Validation
       score;//Score
    //Prompt for Input
    cout<<"Please enter the contestants scores."<<endl;
    cout<<"Judge 1 : ";
    j1 = getJsco(x);
    cout<<"Judge 2 : ";
    j2 = getJsco(x);
    cout<<"Judge 3 : ";
    j3 = getJsco(x);
    cout<<"Judge 4 : ";
    j4 = getJsco(x);
    cout<<"Judge 5 : ";
    j5 = getJsco(x);
    cout<<endl;
    //Call Calculation Function
    score = calSco(j1, j2, j3, j4, j5);
    cout<<"The average score is = "<<score<<endl<<endl;
    
}

//*******************         Problem 7           ********************/
float pValue(int fBalnce, int nYears, float interest) {
    float add;//$'s to save
    interest /= 100;//Convert % to decimal form
    add = fBalnce / (pow((1+interest),nYears));//Calculate $'s to save
    return add;
}
void problem7(){
    //Declare Variables
        int nYears, fBalnce;
        float interest;
    //Prompt User for Inputs
        cout<<"Enter the following to calculate what you need to save."<<endl;
        cout<<"Future Balance : ";
        cin>>fBalnce;
        cout<<"Years to Save  : ";
        cin>>nYears;
        cout<<"Interest Rate  : ";
        cin>>interest;
        cout<<endl;
    //Call pValue Function and Output Present Value
        cout<<"To acquire $"<<fBalnce<<" in "<<nYears<<" years with and interest ";
        cout<<"rate of %"<<interest<<", you must credit your savings account $";
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<pValue(fBalnce, nYears, interest)<<endl;
        cout<<endl;}

//*******************         Problem 8           ********************/
float sProfit(float ns, float sp, float sc, float pp, float pc) {
    float profit;//Profit/Loss
    profit = ((ns * sp) - sc) - ((ns * pp) + pc);
    return profit;
}
void problem8(){
    //Declare Variables
        float profit,//Profit/Loss
                  ns,//Number of Shares
                  sp,//Sale Price Per Share
                  sc,//Sales Commission Paid
                  pp,//Purchase Price Per Share
                  pc;//Purchase Commission Paid
    //Prompt for Inputs
        cout<<"Enter the following to calculate stock profit/loss."<<endl;
        cout<<"Number of Shares         : ";
        cin>>ns;
        cout<<"Sale Price Per Share     : $";
        cin>>sp;
        cout<<"Sale Commission Paid     : $";
        cin>>sc;
        cout<<"Purchase Price Per Share : $";
        cin>>pp;
        cout<<"Purchase Commission Paid : $";
        cin>>pc;
        cout<<endl;
    //Call Profit Function
        profit = sProfit(ns, sp, sc, pp, pc);
    //Output Profit/Loss
        if (profit < 0) {profit *= -1;
                         cout<<"Loss = -$"<<profit<<endl;}
        else            {cout<<"Profit = $"<<profit<<endl;}
        cout<<endl;
}

//*******************         Problem 9           ********************/
int popSize(unsigned short pop, float bRate, float dRate) {
    float newpop;//New Population
    bRate /= 100;//Convert Birth Rate to decimal form
    dRate /= 100;;//Convert Death Rate to decimal form
    newpop = (pop * ((1+bRate) * (1-dRate)));//Calculate New Population
    newpop += .5f;//Correct Decimal Approximation
    return newpop;
}
void problem9(){
   //Declare Variables
        unsigned short pop, years;
        float bRate, dRate;
    //Prompt for input
        cout<<"I will calculate the the population size over a given amount of years"<<endl;
        cout<<"Initial Population : ";
        cin>>pop;
        cout<<"Birth Rate         : ";
        cin>>bRate;
        cout<<"Death Rate         : ";
        cin>>dRate;
        cout<<"Year(s)            : ";
        cin>>years;
        cout<<endl;
    //Setup Loop and Output Population
        for (int i=1; i<=years; i++) {
            pop += popSize(pop, bRate, dRate);
            cout<<"The population after "<<i<<" year(s) is "<<pop<<endl;}
        cout<<endl;     }