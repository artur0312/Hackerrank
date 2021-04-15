#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int start,end;
  cin>>start>>end;
  int orange_tree,apple_tree;
  cin>>apple_tree>>orange_tree;
  int oranges,apples;
  cin>>apples>>oranges;
  int position;
  int apple_in=0;
  for(int i=0;i<apples;i++){
    cin>>position;
    if(position+apple_tree>=start && position+apple_tree<=end){
      apple_in++;
    }
  }
  int orange_in=0;
  for(int i=0;i<oranges;i++){
    cin>>position;
    if(position+orange_tree>=start && position+orange_tree<=end){
      orange_in++;
    }
  }
  cout<<apple_in<<"\n"<<orange_in;

}
