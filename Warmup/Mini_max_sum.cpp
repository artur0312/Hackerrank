#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  long long maximum;
  long long minimum;
  long long sum=0;
  long long x;
  for(int i=0;i<5;i++){
    cin>>x;
    sum+=x;
    if(i==0 or x>maximum){
      maximum=x;
    }
    if(i==0 or x<minimum){
      minimum=x;
    }
  }
  cout<<sum-maximum<<" "<<sum-minimum;
}
