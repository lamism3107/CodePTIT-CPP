#include<bits/stdc++.h>
using namespace std;
long long fibo[93];
void fibo1(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=92;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int main(){
	fibo1();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout<<fibo[n]<<endl;
	}
}
