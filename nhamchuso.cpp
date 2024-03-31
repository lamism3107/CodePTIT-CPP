#include<bits/stdc++.h>
using namespace std;

void min_sum(string a, string b){
	for(int i=0;i<a.size();i++){
		if(a[i]=='6') a[i]='5';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='6') a[i]='5';
	}
	cout << stoll(a) + stoll(b)  << " ";
}

void max_sum(string a, string b){
	for(int i=0;i<a.size();i++){
		if(a[i]=='5') a[i]='6';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='5') b[i]='6';
	}
	cout << stoll(a) + stoll(b)  << " ";
}

int main(){
	string a, b;
	cin >> a>> b;
	min_sum(a,b);
	max_sum(a,b);
}