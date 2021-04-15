#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  string time;
  cin>>time;
  string hourS=time.substr(0,2);
  string minuteS=time.substr(3,2);
  string secondS=time.substr(6,2);
  string period=time.substr(8,2);
  if(period=="AM"){
    if(hourS!="12"){
      cout<<time.substr(0,time.length()-2);
    }
    else{
      cout<<"00:"+time.substr(3,5);
    }
  }
  else{
    if(hourS!="12"){
      int hourI=stoi(hourS);
      hourI+=12;
      cout<<hourI<<time.substr(2,6);
    }
    else{
      cout<<time.substr(0,time.length()-2);
    }
  }
}
