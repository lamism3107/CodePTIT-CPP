//
#include<bits/stdc++.h>
using namespace std;
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *head = NULL;
void insert_front (struct Node** ,int new_data){
	struct Node* newNode = new Node;
	struct Node* new_node = (struct Node* ) malloc(sizeof(struct Node));
	new_node -> data = new_data;
	new_node -> next = head;
	new_node -> prev - newNode;
	(*head) -> prev = new_node;
}
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
	display();
	return 0;
};