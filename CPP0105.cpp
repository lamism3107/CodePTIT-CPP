#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>> n;
		int check=1;
		while(n>0){
			int r=n%10;
			if(r!=0 && r!=6 &&r!=8){
				check=0;
				break;
			}
			n/=10;
		}
		if(check==1) cout<< "YES\n";
		else cout<< "NO\n";
	}
}
