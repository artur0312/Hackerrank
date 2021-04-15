#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int n,p;
  cin>>n>>p;
  int from_beg=p/2;
  int from_end;
  if(n%2==1){
    from_end=(n-p)/2;
  }
  else{
    from_end=(n-p+1)/2;
  }
  cout<<min(from_end,from_beg);
}
