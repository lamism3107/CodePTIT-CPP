// Them 1 node vào ds lk don tai vi tri position.
//
#include<bits/stdc++.h>

using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node *head = NULL;
// ham tao ds lk don
void insert (int new_data){
	struct Node* new_node = (struct Node* ) malloc(sizeof(struct Node));
	new_node -> data = new_data;
	new_node -> next = head;
	head = new_node;
}
// Ham insert_pos: Chen 1 node tai vi tri pos
void insert_pos(int pos, int value){
	Node *pre = new Node;
	Node *cur= new Node;
	Node *temp= new Node;
	cur= head;
	for(int i=1;i<pos;i++){
		pre=cur;
		cur=cur-> next;
	}
	temp -> data = value;
	pre -> next = temp;
	temp -> next = cur;
}
//Ham delete_pos: Xoa node tai 1 vi tri pos
void delete_pos(int pos){
	Node *current = new Node;
	Node *previous = new Node;
	current = head;
	for(int i=1;i<pos;i++){
		previous = current;
		current =current -> next;
	}
	previous -> next = current -> next;
}
// Ham duyet danh sach
void display(){
	struct Node*ptr;
	ptr =head;
	while(ptr !=NULL){
		cout<< ptr -> data <<" ";
		ptr = ptr -> next;
	}
}
int main(){
	insert(3);
	insert(1);
	insert(2);
	insert(6);;
	insert_pos(3,22);
		delete_pos(2);
	display();
	return 0;
};