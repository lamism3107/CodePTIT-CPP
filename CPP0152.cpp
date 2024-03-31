#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,m;
		cin >> a>>m;
		int ok=-1;
		for(int i=0;i<m;i++){
			if((i*a)%m==1) {
				ok=i;
				break;
			}
		}
		cout<< ok<<endl;
	}
}
