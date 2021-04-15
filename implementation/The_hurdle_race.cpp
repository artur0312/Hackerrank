#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int maximum=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    maximum=max(maximum,x);
  }
  int difference=maximum-k;
  if(difference<=0){
    cout<<0;
  }
  else{
    cout<<difference;
  }
  
}
