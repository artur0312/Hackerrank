#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int n;
  cin>>n;
  int sticks[1000];
  for(int i=0;i<1000;i++){
    sticks[i]=0;
  }
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    sticks[x-1]++;
  }
  for(int i=0;i<1010;i++){
    bool empty=true;
    int remaining=0;
    for(int j=0;j<1000;j++){
      remaining+=sticks[j];
      if(empty && sticks[j]!=0){
	empty=false;
	sticks[j]=0;
      }
    }
    if(empty){
      break;
    }
    else{
      cout<<remaining<<'\n';
    }
  }
  
}
