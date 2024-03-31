#include<bits/stdc++.h>
#define MAX 100
using namespace std;
typedef struct QUEUE{
    int A[MAX];
    int front, rear;
};
void Init(QUEUE &q){
    q.front = 0;
    q.rear = -1;
}
int IsEmpty(QUEUE q){
    //neu front > rear thi hang doi rong va tra ve 1
    if (q.front > q.rear){
        return 1;
    }
    return 0;
}
int IsFull (QUEUE q){
    //neu rear == MAX - 1 thi hang doi day va tra ve 1
    if (q.rear==MAX-1){
        return 1;
    }
    //nguoc lai hang doi chua day
    return 0;
}
void Add (QUEUE &q, int x){
    //Neu queue chua day
    if (IsFull(q)==0) {
        //tang chi so rear len 1 don vi
        q.rear++;
        //them phan tu x vao cuoi hang doi
        q.A[q.rear] = x;
    }
}
int Remove(QUEUE &q){
    int x;
    if (!IsEmpty(q)) {
        x = q.A[q.front];
        q.front++;
        return x;
    }
    else{
        q.front = 0; q.rear = -1;
    }
}
void Input(QUEUE &q, int n){
    for(int i = 0; i< n; i++){
        int x;
        cin>> x;
        //thuc hien add phan tu x vao queue
        Add(q,x);
    }
}
void Output(QUEUE q){
    for(int i = q.front; i <= q.rear; i++){
        printf("%d \t",q.A[i]);
    }
}
int main(){
    QUEUE q;
    Init(q);
    int n;
    cin>> n;
    Input(q,n);
    Output(q);
    int x = 66;
    Add(q,x);
    Output(q);
    int front = Remove(q);
    printf("\nHang doi sau khi remove phan tu %d la: \n",front);
    Output(q);
}