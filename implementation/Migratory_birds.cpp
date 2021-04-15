#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int frequency[5];
  for(int i=0;i<5;i++){
    frequency[i]=0;
  }
  int observations;
  cin>>observations;
  int bird;
  for(int i=0;i<observations;i++){
    cin>>bird;
    frequency[bird-1]++;
  }
  int maximum=0;
  for(int i=0;i<5;i++){
    maximum=max(maximum,frequency[i]);
  }
  for(int i=0;i<5;i++){
    if(frequency[i]==maximum){
      cout<<i+1;
      break;
    }
  }
  
  
}
