#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int socks;
  cin>>socks;
  int colors[100];
  for(int i=0;i<100;i++){
    colors[i]=0;
  }
  int x;
  for(int i=0;i<socks;i++){
    cin>>x;
    colors[x-1]++;
  }
  int pairs=0;
  for(int i=0;i<100;i++){
    pairs+=(colors[i]/2);
    cout<<pairs<<endl;
  }
  cout<<pairs;

}
