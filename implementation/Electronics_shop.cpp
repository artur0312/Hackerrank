#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int budget,n,m;
  cin>>budget>>n>>m;
  int keyboard[1000];
  int drives[1000];
  for(int i=0;i<n;i++){
    cin>>keyboard[i];
  }
  for(int i=0;i<m;i++){
    cin>>drives[i];
  }
  int spent=-1;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      int couple=keyboard[i]+drives[j];
      if(couple<=budget && couple>spent){
	spent=couple;
      }
    }
  }
  cout<<spent;
}
