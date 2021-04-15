#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int chocolate[100];
  int squares;
  cin>>squares;
  for(int i=0;i<squares;i++){
    cin>>chocolate[i];
  }
  int day,month;
  cin>>day>>month;
  int possibilities=0;
  for(int i=0;i<=squares-month;i++){
    int sum=0;
    for(int j=0;j<month;j++){
      sum+=chocolate[i+j];
    }
    if(sum==day){
      possibilities++;
    }
  }
  cout<<possibilities;
}
