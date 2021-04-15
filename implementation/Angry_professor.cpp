#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int tests;
  cin>>tests;
  for(int i=0;i<tests;i++){
    int students, threshold;
    cin>>students>>threshold;
    int on_time=0;
    for(int j=0;j<students;j++){
      int time;
      cin>>time;
      on_time=on_time+(time<=0);
    }
    if(on_time<threshold){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
  }
}
