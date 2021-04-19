#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n;
	short array[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int position=0;
	int jumps=0;
	while(position<n-1){
		if(position+2<n && array[position+2]==0){
			position+=2;
			jumps++;
		}
		else{
			position++;
			jumps++;
		}
	}
	cout<<jumps;
}
