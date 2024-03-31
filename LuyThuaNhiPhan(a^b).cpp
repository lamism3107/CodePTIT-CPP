//Tinh a^b.
//Input : 1 2 10
//Output: 1024

//Luy thua nhi phan: 
// a^b = a^(b/2) * a^(b/2) neu b chan.
// a^b = a*(b/2) * a*(b/2) * a neu b le.
#include<bits/stdc++.h>
using namespace std;
long long BinaryPow(int a,int b){
	long long res=1;
	while(b!=0){
		if(b%2==1){
			res *= a;
		}
		b/=2;
		a*=a;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a>> b;
		cout<< BinaryPow(a,b);
	}
}
// Giai thich test case:
// Vong lap 1: res=1, b=5 (b!=0), a=4
// Vong lap 2: res=4, b=2 (b!=0), a=16
// Vong lap 3: res=4, b=1 (b!=0), a=256
// Vong lap 4: res=4*256=1024, b=0(Ketthuc vong lap), a=65536.
