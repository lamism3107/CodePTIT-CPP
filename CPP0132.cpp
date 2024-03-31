#include<bits/stdc++.h>
using namespace std;
void thuaso(long long n){
	long long res=0 ;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			res=max(res,i);
			while(n%i==0){
				n/=i;
			}	
		}	
	}
	if(n!=1) cout<< n;
	else cout<< res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		thuaso(n);
		cout<<endl;
	}
}
