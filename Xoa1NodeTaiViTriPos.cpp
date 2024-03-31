// Xoa 1 node tai vi tri pos khoi ds lk don

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node *head = NULL;
void insert (int new_data){
	struct Node* new_node = (struct Node* ) malloc(sizeof(struct Node));
	new_node -> data = new_data;
	new_node -> next = head;
	head = new_node;
}
void display(){
	struct Node*ptr;
	ptr =head;
	while(ptr !=NULL){
		cout<< ptr -> data <<" ";
		ptr = ptr -> next;
	}
}
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
int main(){
	insert(3);
	insert(1);
	insert(2);
	insert(6);
	delete_pos(2);
	display();
	return 0;
};