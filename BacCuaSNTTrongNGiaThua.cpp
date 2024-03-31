//Cho so tu nhien N va P. Tim X lon nhat de N! chia het cho P^X. VD: n=7, p=3 thi x=2 la lon nhat khi 7! CHIA HET cho 3^2.

//Input: 62 7
//Output: 9

#include<bits/stdc++.h>
using namespace std;
int solve(int n, int p){
	int ans=0;
	for(int i=p;i<=n;i+=p){
		int tmp=i;
		while(tmp%p==0){
			ans++;
			tmp/=p;
		}
	}
	return ans;
}
int main(){
	int n,p;
	cin >> n>>p;
	cout<< solve(n,p);
	
}
