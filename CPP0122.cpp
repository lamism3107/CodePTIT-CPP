#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
	long long r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long lcm(long long a,long long b){
	return a*b/gcd(a,b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long res=1;
		for(int i=2;i<=n;i++){
			res= lcm(res,i);
		}
		cout<< res<<endl;
	}
}
