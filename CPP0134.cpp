#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while(t--){
		int n,k;
		cin >> n>>k;
		int ans=-1;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0) {
				k--;
				if(k==0){
					ans=i;
				}
				n/=i;
			}
		}
		if(n!=1 && k==1) ans=n;
		cout<< ans<<endl;
	}
}
