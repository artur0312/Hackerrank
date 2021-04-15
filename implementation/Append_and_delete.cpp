#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  string s,t;
  int k;
  cin>>s>>t>>k;
  int minimum;
  int equal_c=0;
  for(int i=0;i<s.size();i++){
    if(i<t.size()&&s[i]==t[i]){
      equal_c++;
    }
    else{
      break;
    }
  }
  minimum=s.size()-equal_c+t.size()-equal_c;
  if(minimum<=k && (minimum-k)%2==0){
    cout<<"Yes";
  }
  else if(k>=s.size()+t.size()){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
}
