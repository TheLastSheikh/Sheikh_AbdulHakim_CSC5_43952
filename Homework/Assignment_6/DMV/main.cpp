/* 
 * File:   main.cpp
 * Author: TheSheikh
 *
 * Created on May 21, 2015, 6:30 PM
 */

#include <iostream>
//#include <cstdlib>
#include <string>
//#include <iomanip>

using namespace std;

class TestGrader {
public:
  char answers[20];
  void setKey(string stuff)
  {
      for(int i=0; i<20; i++){
          answers[i] = stuff[i];
      }
  }
  void grade (char *stuff){
      int equal = 0;
      for (int i=0; i<20; i++){
          if (answers[i] == stuff[i]){
              equal += 1;
          }
      }
      if (equal<15){
          cout<<"You have failed your exam!"<<endl;
          cout<<equal<<"/20";
      }
      else {
          cout<<"You have passed!"<<endl;
          cout<<equal<<"/20";
      }
  }
};
int main(int argc, char** argv) {
    TestGrader a;
    //char answers[20]={'B','D','A','A','C','A','B','A','C','D','B','C','D','A','D','C','C','B','D','A'};
    a.setKey("BDAACABACDBCDADCCBDA");
    cout<<"Input answers here:"<<endl;
    char input [20];
    for (int i=0; i<20; i++){
        cin>>input[i];
        while (input[i] != 'A' && input[i] != 'B' && input[i] != 'C' && input[i] != 'D'){
            cout<<"Invalid input, answer must be A, B, C, or D"<<endl;
            cin>>input[i];
        }
        }
    a.grade(input);
    
    return 0;
}

