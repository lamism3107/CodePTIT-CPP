#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
typedef struct node NODE;
struct STACK{
    NODE *top;
};

//Ham khoi tao stack
void Init (STACK &s){
    s.top = NULL;
}
NODE* CreateNode (int x) {
    NODE *p;
    p = new NODE;
    //neu p = NULL thi ko du bo nho cap phat
    if (p==NULL) {
        printf ("KHONG DU BO NHO!");
        return NULL;
    }
    p->data=x;
    p->next=NULL;
    return p;
}
//Ham kiem tra tinh rong
int IsEmpty(STACK s){
    if (s.top == NULL){
        return 1;
    }
    return 0; 
}
//Ham day phan tu vao stack
void Push (STACK &s, int x){
    NODE *NewNode = CreateNode(x);
    if (NewNode != NULL){
        if (IsEmpty(s)){
            s.top = NewNode;
        } 
        else{ 
            NewNode->next = s.top;
            s.top = NewNode;
        }
    }
}
int Pop (STACK &s){
    NODE *p;
    int x;
    if (!IsEmpty(s)){
        p = s.top;
        s.top = p->next;
        x = p->data;
        delete p;
        return x;
    }
}
void Input(STACK &s, int n){
    for(int i = 0; i < n; i++){
        int x;
        cin>> x;
        Push(s,x);
    }
}
void Output(STACK s){
    NODE *p;
    for(p = s.top; p != NULL; p=p->next){
       	cout<< p->data;
    }
}
int main(){
    STACK s;
    Init(s);
    int n; 
	cin>> n;
    Input(s,n);
    cout<<"Danh sach cac phan tu trong stack: \n";
    Output(s);
    cout<<endl;
    int x;
    cin>> x;
    Push(s,x);
	cout<<"Stack sau khi duoc push 1 phan tu: \n";
    Output(s);
    cout<<endl;
    int p = Pop(s);
	cout<<"Phan tu vua duoc lay khoi stack la: \n";
	cout<< p;
	cout<<endl;
	cout<<"Stack sau khi lay ra 1 phan tu";
    Output(s);
}