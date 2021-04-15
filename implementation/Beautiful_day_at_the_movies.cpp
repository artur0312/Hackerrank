#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int begin,end,k;
  cin>>begin>>end>>k;
  int beautiful=0;
  for(int i=begin;i<=end;i++){
    string s=to_string(i);
    reverse(s.begin(),s.end());
    int reversed=stoi(s);
    if((i-reversed)%k==0){
      beautiful++;
    }
  }
  cout<<beautiful;
  
    
}
