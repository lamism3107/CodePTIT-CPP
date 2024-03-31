#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int ok=1;
		while(n>10){
			int socuoi=n%10;
			n/=10;
			int sogancuoi=n%10;
			if(abs(socuoi-sogancuoi)!=1){
				ok=0;
				break;
			}

//			cout<< abs(socuoi-sogancuoi)<<" ";
		}
		if(ok==1)
			 cout<< "YES"<<endl;
		else cout<<"NO"<< endl;
	}
}
