#include<bits/stdc++.h>
using namespace std;
// biến cnt để đếm số lượng của dãy số hiện tại
int n, a[100],final, cnt;
//vector<int> tmp;
vector<vector<int>> res;
// khởi tạo số lượng lượng dãy số đầu tiên là 1 và phần tử đầu tiên = n;
void ktao(){
	cnt=1;
	a[1]=n;
}

void sinh(){
	int i=cnt;
	// Duyệt từ cuối lên đầu cho đến chừng nào để tìm phần tử đầu tiên khác 1;
	while(i>=1 && a[i]==1){
		i--;
	}
	// nếu ở cấu hình cuối cùng thì dừng (i=0)
	if(i==0){
		final=1;
	}
	// nếu chưa phải cấu hình cuối cùng (i!=0) thì giảm phần tử a[i] đi 1 đơn vị
	// tính số đơn vị còn thiếu (sau khi giam di 1 don vi) bằng cách d = cnt - i +1;
	// VD: tescase:n=10.  3 3 1 1 1 1 -> 3 2 2 2 1 . 
	else{
		// giam a[i] di 1 don vi   
		a[i]--;  //a[i] =2;
		int d = cnt-i+1;     // d= cnt (=6) - i (=2) + 1 = 5;
		//reset cnt=i  ve sau cong them q phan tu con lai thi cong them d.
		cnt=i;    // cnt=2;
		//Tính q (số đơn vị còn thiếu gấp mấy lần a[i]): q=d/a[i];
		int q= d/a[i] ;   // q= d(=5)/a[i] (=2) =2  => q=2
		// Tính r (số dư còn lại d%a[i])
		int r= d%a[i];  // r= d(=5) % a[i](=2) = 1;
		//Biểu diễn các phần tử còn lại theo a[i]. Viết q lần số a[i];
		for(int j=1;j<=q;j++){
			a[i+j] = a[i];
		} //=> 3 2 2 2
		// cnt+=q để cộng thếm q phần tử vừa nạp vào
		cnt+=q; //cnt=2+2=4
		// Kiểm tra nếu r khác 0 thì phải viết thêm số dư vào cuối
		if(r>0){ //r=1
			a[cnt+1]=r; //a[5]=1;
			cnt++; // cnt=5.
		}
		//=> cau hinh tiep theo cua 3 3 1 1 1 là 3 2 2 2 1.
	}
}
int main(){
	cin>> n;
	final=0;
	ktao();
	int dem=0;
	while(!final){
		dem++;
		vector<int>tmp;
		for(int i=1;i<=cnt;i++){
			tmp.push_back(a[i]);
		}
		sort(tmp.begin(), tmp.end(), greater<int>());
		res.push_back(tmp);
		for(int k : tmp){
			cout<< k <<"+";
		}
		cout<<endl;
//		cout<< tmp[tmp.end-1]<<endl;;
		sinh();
	}
	cout<< res.size()<<endl;

	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size()-1;j++){
			cout<< res[i][j]<<"+";
		}
		cout<< res[i][res[i].size()-1]<<endl;
	}
}