#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int games;
  cin>>games;
  int points;
  cin>>points;
  int maximum=points;
  int minimum=points;
  int break_maximum=0;
  int break_minimum=0;
  for(int i=1;i<games;i++){
    cin>>points;
    if(points>maximum){
      maximum=points;
      break_maximum++;
    }
    if(points<minimum){
      minimum=points;
      break_minimum++;
    }
  }
  cout<<break_maximum<<" "<<break_minimum;
    
}
