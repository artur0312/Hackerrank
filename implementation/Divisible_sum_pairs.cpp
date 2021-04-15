#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int ar[100];
  int k;
  int n;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>ar[i];
  }
  int pairs=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if((ar[i]+ar[j])%k==0){
	pairs++;
      }
    }
  }
  cout<<pairs;
}
