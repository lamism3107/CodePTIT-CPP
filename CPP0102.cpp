#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		char c;
		cin >> c;
		if(c>=97 && c<=122){
			c-=32;
		}
		else if(c>=65 && c<=90){
			c+=32;
		}
		cout<< c<<endl;;
	}
}
