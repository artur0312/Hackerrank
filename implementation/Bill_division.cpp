#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

fo(adh,
int main(){
  int items, declined;
  cin>>items>>declined;
  int sum=0;
  int x;
  for(int i=0;i<items;i++){
    cin>>x;
    if(i!=declined){
      sum+=x;
    }
  }
  int correct=sum/2;
  int bryan;
  cin>>bryan;
  if(correct==bryan){
    cout<<"Bon Appetit";
  }
  else{
    cout<<bryan-correct;
  }
}
