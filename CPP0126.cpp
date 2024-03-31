#include<bits/stdc++.h>
using namespace std;
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l>>r;
		for(int i=min(l,r);i<=max(l,r);i++){
			if(snt(i)) cout<<i <<" ";
		}
		cout<< endl;	
	}

}
