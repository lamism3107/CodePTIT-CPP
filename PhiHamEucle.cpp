#include<bits/stdc++.h>

using namespace std;
long long euler(long long n){
	long long ans=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			ans-=ans/i;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n!=1){
		ans-=ans/n;
	}
	return ans;
}
int main(){
	long long n;
	cin >> n;
	cout<< euler(n);
}
