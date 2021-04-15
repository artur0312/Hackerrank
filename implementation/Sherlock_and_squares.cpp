#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>

using namespace std;

int main(){
  int queries;
  cin>>queries;
  for(int i=0;i<queries;i++){
    int minimum,maximum;
    cin>>minimum>>maximum;
    int sqrt_min=sqrt(minimum);
    int sqrt_max=sqrt(maximum);
    int result=sqrt_max-sqrt_min;
    if(sqrt_min*sqrt_min==minimum){
      result++;
    }
    cout<<result<<'\n';
  }
}
