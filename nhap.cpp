#include<bits/stdc++.h>
using namespace std;
int dembac2(int n){
	int cnt=0;
	for(int i=2;i<=n;i+=2){
		int tmp= i;
		while(tmp%2==0){
			cnt++;
			tmp/=2;
		}
	}
	return cnt;
}
int dembac5(int n){
	int cnt=0;
	for(int i=5;i<=n;i+=5){
		int tmp= i;
		while(tmp%5==0){
			cnt++;
			tmp/=5;
		}
	}
	return cnt;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,p;
		cin >> n;
		int ans= min(dembac2(n),dembac5(n));
		cout<< ans<<endl;
	}
}
