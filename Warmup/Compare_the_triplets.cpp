#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int a[3];
  int b[3];
  for(int i=0;i<3;i++){
    cin>>a[i];
  }
  for(int i=0;i<3;i++){
    cin>>b[i];
  }
  int pa=0;
  int pb=0;
  for(int i=0;i<3;i++){
    if(a[i]>b[i]){
      pa++;
    }
    else if(a[i]<b[i]){
      pb++;
    }
  }
  cout<<pa<<" "<<pb;
    
}
