#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long sum=0;
	long long res =1;
	for(int i=1;i<=n;i++){
		res=res*i;
		sum+=res;
	}
	cout<< sum;
}
