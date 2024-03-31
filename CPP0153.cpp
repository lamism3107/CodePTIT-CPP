#include<bits/stdc++.h>
using namespace std;
int n, x[100];
char c[100];
void solve(){
	string s="";
	for(int k=0;k<n;k++){
		if(x[k]==1){
			cout<< c[x[k]];
		}
	}
	cout<<endl;
//	cout<< s;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n-1){
			solve();
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	int t;
	cin>> t;
	while(t--){
		cin>> n;
		for(int i=0;i<n;i++){
			cin>> c[i];
		}
		for(int i=0;i<n;i++){
			cout<< c[i];
		}
		cout<<endl;
		Try(0);
	}
}