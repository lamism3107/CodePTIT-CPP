#include<bits/stdc++.h>
using namespace std;
int n, a[1000];
int check(){
	int l=1, r=n;
	while(l<=r){
		if(a[l]!=a[r]) {
			return 0;
//			l++;r--;
		}
		l++; r--;
	}
	return 1;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(check()){
				for(int i=1;i<=n;i++){
					cout<< a[i]<<" ";
				}
				cout<< endl;
			}
		}
		else
			Try(i+1);
	}
}
int main(){
	cin>> n;
	Try(1);
}