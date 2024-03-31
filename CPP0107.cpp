#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string d1 = "101 A B B A D C C A B D C C A B D";
		string d2 = "102 A C C A B C D D B B C D D B B";
		double diemful = 10.0;
		double diemtru = 0.0;
		string s;
		getline(cin,s);
		if(s[2]=='1'){
			for(int i=4;i<s.size();i+=2){
				if(s[i]!=d1[i]) diemtru+= (double)2/3;
			}
		}
		if(s[2]=='2'){
			for(int i=4;i<s.size();i+=2){
				if(s[i]!=d2[i]) diemtru+= (double)2/3;
			}
		}
		diemful-=diemtru ;
		cout<< fixed<<setprecision(2)<< diemful<<endl;
	}
	
}
