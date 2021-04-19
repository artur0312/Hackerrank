#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int size;
	cin>>size;
	int frequency[101];
	for(int i=0;i<101;i++){
		frequency[i]=0;
	}
	int x;
	for(int i=0;i<size;i++){
		cin>>x;
		frequency[x]++;
	}
	int maximum;
	for(int i=1;i<101;i++){
		maximum=max(maximum,frequency[i]);
	}
	cout<<size-maximum;
}

