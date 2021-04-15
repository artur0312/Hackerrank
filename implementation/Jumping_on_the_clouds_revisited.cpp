#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int n,jump;
  cin>>n>>jump;
  int clouds[25];
  for(int i=0;i<n;i++){
    cin>>clouds[i];
  }
  int position=0;
  int energy=100;
  while(true){
    position=(position+jump)%n;
    energy--;
    if(clouds[position]==1){
      energy-=2;
    }
    if(position==0){
      break;
    }
  }
  cout<<energy;
      
}
