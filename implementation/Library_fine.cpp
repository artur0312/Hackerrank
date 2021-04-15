#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int due[3];
  int returned[3];
  for(int i=0;i<3;i++){
    cin>>returned[i];
  }
  for(int i=0;i<3;i++){
    cin>>due[i];
  }
  if(returned[2]>due[2]){
    cout<<10000;
  }
  else if(returned[2]==due[2] && returned[1]>due[1]){
    cout<<500*(returned[1]-due[1]);
  }
  else if(returned[2]==due[2] && returned[1]==due[1] && returned[0]>due[0]){
    cout<<15*(returned[0]-due[0]);
  }
  else{
    cout<<0;
  }
}
