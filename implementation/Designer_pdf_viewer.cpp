#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int h[26];
  for(int i=0;i<26;i++){
    cin>>h[i];
  }
  string s;
  cin>>s;
  int maximum=0;
  for(int i=0;i<s.size();i++){
    maximum=max(maximum,h[s[i]-'a']);
  }
  cout<<maximum*s.size();
}
