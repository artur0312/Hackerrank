#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>

using namespace std;

int main(){
  int n;
  cin>>n;
  double positives=0;
  double negatives=0;
  double zeros=0;
  int x;
  for(int i=0;i<n;i++){
    cin>>x;
    if(x>0){
      positives++;
    }
    else if(x<0){
      negatives++;
    }
    else{
      zeros++;
    }
  }
  cout<<fixed<<setprecision(6);
  cout<<positives/n<<"\n"<<negatives/n<<"\n"<<zeros/n;
  
}
