#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int size;
  cin>>size;
  int arr[100];
  for(int i=0;i<100;i++){
    arr[i]=0;
  }
  int x;
  for(int i=0;i<size;i++){
    cin>>x;
    arr[x-1]++;
  }
  int max_count=0;
  for(int i=0;i<99;i++){
    int count=arr[i]+arr[i+1];
    max_count=max(count,max_count);
  }
  cout<<max_count;
  

    
}
