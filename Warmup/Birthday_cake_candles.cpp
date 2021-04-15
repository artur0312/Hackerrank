#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int n;
  cin>>n;
  int max_size;
  int amount;
  int x;
  for(int i=0;i<n;i++){
    cin>>x;
    if(i==0 or x>max_size){
      max_size=x;
      amount=1;
    }
    else if(x==max_size){
      amount++;
    }
  }
  cout<<amount;
}
