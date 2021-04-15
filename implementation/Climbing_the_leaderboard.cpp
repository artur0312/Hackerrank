#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
  int n;
  int checkpoints[200000];
  cin>>n;
  int positions=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(i==0 or x!=checkpoints[positions-1]){
      checkpoints[positions]=x;
      positions++;
    }
  }
  int m;
  cin>>m;
  int worst=positions;
  for(int i=0;i<m;i++){
    int score;
    cin>>score;
    if(score>=checkpoints[0]){
      cout<<1<<"\n";
      continue;
    }
	
    for(int j=worst-1;j>=0;j--){
      if(score<checkpoints[j]){
	cout<<j+2<<"\n";
	worst=j+1;
	break;
      }
    }
  }
}
