// so hoan hao ap dung dinh li euclid: 
// p la so nguyen to va 2^p - 1  la so nguyen to thi : 2^p-1 * 2^(p-1) tao thanh 1 so hoan hao;
#include<bits/stdc++.h>
using namespace std;

int snt(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int hoanhao(long long n){
	for(int i=1;i<=36;i++){
		if(snt(i)){
			long long x= (long long)pow(2,i)-1;
			if(snt(x)){
				long long hh= x* ((long long) pow(2,i-1));
				if(hh==n) return 1;
			}
		}
	}
	return 0;
}
int main(){
	long long n;
	cin>> n;
	cout<< hoanhao(n);
	if(hoanhao(n)) cout<<"YES";
	else cout<<"NO";
}
