#include<bits/stdc++.h>
using namespace std;
int sotang(string s){
	int maxi=s[0]-'0';
	for(int i=1;i<s.size();i++){
		if((s[i]-'0')>=maxi){
			maxi= s[i]-'0';
		}
		else {
			return 0;
		}
	}
	return 1;
}
int sogiam(string s){
	int mini= s[0]-'0';
	for(int i=1;i<s.size();i++){
		if(s[i]-'0'<=mini){
			mini=s[i]-'0';
		}
		else {
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>> t;
	while(t--){
		string s;
		cin >> s;
		string s2=s;
		if(sotang(s) || sogiam(s2) ){
			cout<< "YES";
		}
		else cout<< "NO";
		
	}
	
}
