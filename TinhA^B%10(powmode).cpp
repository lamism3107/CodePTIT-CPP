// Tinh a^b%10.
// Ap dung ct (a*b)%c= (a%c * b%c)%c de ko bi tranf so
#include<bits/stdc++.h>
using namespace std;
long long solve(int a,int b){
	long long res=1;
	while(b!=0){
		if(b%2==1){
			res*=a;
			res%10;
		}
		a*=a;
		a%10;
		b/=2;
	}
	return res%10;
}
int main(){
	int a,b;
	cin >> a>>b;
	cout<<  solve(a,b);
}
