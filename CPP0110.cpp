#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int pos= s.find("084");
		s.erase(pos,3);
		cout<< s<<endl;
	}
}
