#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int students;
  cin>>students;
  int note;
  for(int i=0;i<students;i++){
    cin>>note;
    if(note<37){
      cout<<note<<"\n";
    }
    else if(note%5>=3){
      cout<<note-(note%5)+5<<"\n";
    }
    else{
      cout<<note<<"\n";
    }
  }
  
}
