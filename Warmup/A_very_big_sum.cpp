#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int n;
  long long result=0;
  cin>>n;
  for(int i=0;i<n;i++){
    long long x;
    cin>>x;
    result+=x;
  }
  cout<<result;
}
