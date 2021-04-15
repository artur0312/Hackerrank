#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int days;
  cin>>days;
  int liked=0;
  int shared=5;
  for(int i=0;i<days;i++){
    liked+=(shared/2);
    shared=3*(shared/2);
  }
  cout<<liked;
    
}
