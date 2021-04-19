#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int size;
	int k;
	cin>>size>>k;
	int modulus[110];
    for(int i=0;i<110;i++){
        modulus[i]=0;
    }
	int x;
	for(int i=0;i<size;i++){
		cin>>x;
		x=x%k;
		modulus[x]++;
	}

	int result=0;
	for(int i=1;i<=k/2;i++){
        if(k%2!=0 or i!=k/2){
		result+=max(modulus[i],modulus[k-i]);
        }
	}

	if(k%2==0 && modulus[k/2]>=1){
		result++;
	}
	if(modulus[0]>=1){
		result++;
	}
	cout<<result;

}

