#include<iostream>
#include<algorithm>
#include<string>





using namespace std;
int main(){
  int sizea,sizeb;
  int a[10];
  int b[10];
  cin>>sizea>>sizeb;
  int maxa=0;
  int minb=101;
  for(int i=0;i<sizea;i++){
    cin>>a[i];
    maxa=max(maxa,a[i]);
  }
  for(int i=0;i<sizeb;i++){
    cin>>b[i];
    minb=min(minb,b[i]);
  }
  int between=0;
  for(int i=maxa;i<=minb;i++){
    bool is_between=true;
    for(int j=0;j<sizea;j++){
      if(i%a[j]!=0){
	is_between=false;
	break;
      }
    }
    for(int j=0;j<sizeb;j++){
      if(!is_between or b[j]%i!=0){
	is_between=false;
	break;
      }
    }
    if(is_between){
      between++;
    }
  }
  cout<<between;
}
