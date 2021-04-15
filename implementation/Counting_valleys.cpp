#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int steps;
  int level=0;
  cin>>steps;
  char c;
  int count=0;
  bool below=false;
  for(int i=0;i<steps;i++){
    cin>>c;
    if(c=='U'){
      level++;
    }
    else{
      level--;
    }
    if(level<0 && below==false){
      count++;
      below=true;
    }
    if(level==0){
      below=false;
    }
  }
  cout<<count;
}
