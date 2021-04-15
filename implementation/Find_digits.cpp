#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int queries;
  cin>>queries;
  for(int i=0;i<queries;i++){
  int n;
  cin>>n;
  string s=to_string(n);
  int digits=0;
  for(int j=0;j<s.size();j++){
    int d=s[j]-'0';
    if(d!=0 && n%d==0){
      digits++;
    }
  }
  cout<<digits<<'\n';
  }
}
