#include<bits/stdc++.h>
using namespace std;
#define MAX 100
struct stackk{
	int top;
	int a[MAX];
};
void init(stackk &s){
	s.top = -1;
}
//Kt tinh rong cua stack
int isEmpty( stackk &s){
	if(s.top == -1)  return 1;
	else return 0;
}

//Kt tinh day cua stack;
int isFull( stackk &s){
	if( s.top == MAX-1)
		return 1;
	else return 0;
}
// Dua phan tu vao stack:
void Push (stackk &s, int x){
	if(!isFull(s)){
		s.top++;
		s.a[s.top] = x;
	}
}
//Lay du lieu khoi stack
int Pop (stackk &s){
	int x;
	if(!isEmpty(s)){
		x = s.a[s.top];
		s.top--;
	}
	return x;
}
void input(stackk &s, int n){
	for(int i=0;i<n;i++){
		int x;
		cin>> x;
		Push(s,x);
	}
}
void output(stackk s){
	for(int i = s.top ;i > -1; i--){
		cout<< s.a[i];
	}
}
int main(){
	stackk s;
	int n;
	cin >> n;
	init(s);
	input(s,n);
	output(s);
	cout<<endl;
	pop(s);
	output(s);
}

