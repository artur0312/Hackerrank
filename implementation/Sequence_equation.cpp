#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int size;
  cin>>size;
  int array[50];
  for(int i=0;i<size;i++){
    cin>>array[i];
  }
  for(int i=1;i<=size;i++){
    int pi;
    for(int j=0;j<size;j++){
      if(array[j]==i){
	pi=j+1;
	break;
      }
    }
    for(int j=0;j<size;j++){
      if(array[j]==pi){
	cout<<j+1<<'\n';
	break;
      }
    }
  }
}
