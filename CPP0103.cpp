#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	double res=0;
	for(int i=1;i<=n;i++){
		res= res+ (double)1/i;
	}
	cout<< fixed<< setprecision(4)<<res; 
}
