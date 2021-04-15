#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int size,k, queries;
  cin>>size>>k>>queries;
  int array[100000];
  for(int i=0;i<size;i++){
    cin>>array[(i+k)%size];
  }
  for(int i=0;i<queries;i++){
    int position;
    cin>>position;
    cout<<array[position]<<'\n';
  }
  
}
