#include<bits/stdc++.h>
using namespace std;
long long tachso(long long n){
	long long tong=0;
	while(n>0){
		tong=tong+n%10;
		n/=10;
	}
	return tong;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >>n ;
		long long ans= tachso(n);
		while(ans>9){
			ans= tachso(ans);
		}
		cout<< ans<<endl;
	}
}
