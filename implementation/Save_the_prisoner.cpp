#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int tests;
  cin>>tests;
  for(int i=0;i<tests;i++){
    int prisoners,sweets,start;
    cin>>prisoners>>sweets>>start;
    int last=start-1+sweets;
    last=last%prisoners;
    if(last==0){
      cout<<prisoners<<'\n';
    }
    else{
      cout<<last<<'\n';
    }
  }
    
}
