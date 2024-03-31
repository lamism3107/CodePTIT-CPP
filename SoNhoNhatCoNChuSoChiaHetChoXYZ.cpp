//Tim so nho nhat co N chu so chia het cho ca X,Y,Z. Neu ko co thi in ra -1.
//Input:  x, y, z, n:  2 3 5 4
//Output: 1020

#include<bits/stdc++.h>
using namespace std;

long long bcnn(int x, int y){
	return x*y/__gcd(x,y);
}
long long solve(int x,int y, int z, int n){
	long long tmp= bcnn(bcnn(x,y),z);
	int min=pow(10,n-1);
	long long res= (min+tmp-1)/tmp*tmp;
	if(res<pow(10,n)) return res;
	else return 1;
}
int main(){
	int x, y,z,n;
	cin >> x >> y >> z >> n;
	cout<< solve(x,y,z,n);
}
