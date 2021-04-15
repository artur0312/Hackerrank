#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool is_leap_gregorian(int year){
  if(year%400==0){
    return true;
  }
  else if(year%100==0){
    return false;
  }
  else{
    return year%4==0;
  }
}

bool is_leap_julian(int year){
    return year%4==0;
}
  
int main(){
  int year;
  cin>>year;
  if(year==1918){
    cout<<"26.09.1918";
  }
  else if(year<1918){
    if(is_leap_julian(year)){
      cout<<"12.09."<<year;
    }
    else{
      cout<<"13.09."<<year;
    }
  }
  else if(year>1918){
    if(is_leap_gregorian(year)){
      cout<<"12.09."<<year;
    }
    else{
      cout<<"13.09."<<year;
    }
  }
}
