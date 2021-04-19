#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s;
	long long n;
	cin>>s>>n;
	long long a=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='a')
			a++;
	}
	long long result=0;
	long long size=s.size();
	result=(n/size)*a;
	long long modulus=n%size;
	for(int i=0;i<modulus;i++){
		if(s[i]=='a')
			result++;
	}

	cout<<result;
}
