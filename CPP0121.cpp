#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b){
	long long r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		long long a,b;
		cin >> a >>b;
		long long ans= ucln(a,b);
		cout<< (long long )a*b/ans <<" "<< ans<<endl;
	}
}
