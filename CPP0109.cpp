#include<bits/stdc++.h>
using namespace std;
int solve(int n){
	int demchan=0,demle=0;
	while(n>0){
		int r=n%10;
		if(r%2==0) demchan++;
		else demle++;
		n/=10;
	}
	return demchan==demle;
}
int main(){
	int n;
	cin >> n;
	int cnt=10;
	for(int i=pow(10,n-1);i<=pow(10,n)-1 ;i++){
		if(solve(i)) {
			cnt--;
			if(cnt==0) {
				cout<<i<<endl;
				cnt=10;
			}
			else cout<< i<<" ";
		}
	}
}
