#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long tmp=n;
		int check=1;
		long long res=0;
		while(n>0){
			int r=n%10;
			res=res*10+r;
			n/=10;
		}

		if(tmp==res){
			cout<< "YES\n";
		}
		else cout<< "NO\n";
	}
}
