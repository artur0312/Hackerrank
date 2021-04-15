#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int queries;
  cin>>queries;
  for(int i=0;i<queries;i++){
    int catA,catB,mouse;
    cin>>catA>>catB>>mouse;
    int distanceA=abs(catA-mouse);
    int distanceB=abs(catB-mouse);
    if(distanceA<distanceB){
      cout<<"Cat A"<<"\n";
    }
    else if(distanceA>distanceB){
      cout<<"Cat B"<<"\n";
    }
    else{
      cout<<"Mouse C"<<"\n";
    }
  }

    
}
