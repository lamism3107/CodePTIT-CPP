#include <bits/stdc++.h>  
 using namespace std;
  
struct Node {  
    int data;  
    struct Node* next;  
    struct Node* prev;  
};  
  
//
void push(struct Node** head_ref, int new_data)  {  
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  
    new_node->data = new_data;    
    new_node->next = (*head_ref);  
    new_node->prev = NULL;  
    if ((*head_ref) != NULL)  
        (*head_ref)->prev = new_node;  
    (*head_ref) = new_node;  
}  
  
void insertBefore(struct Node** head_ref, struct Node* next_node, int new_data) {  
    if (next_node == NULL) {  
        printf("Empty");  
        return;  
    }  
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  
    new_node->data = new_data;  
    new_node->prev = next_node->prev;    
    next_node->prev = new_node;  
    new_node->next = next_node;  
  
    if (new_node->prev != NULL)  
        new_node->prev->next = new_node;  
    else
        (*head_ref) = new_node; 
}  
  
void printList(struct Node* node)  {  
    struct Node* last;  
	cout<<"Cac phan tu duoc day vao dslk: \n";
    while (node != NULL) {   
        cout<< node->data;
        last = node;  
        node = node->next;  
    }  
    printf("\n");
	cout<<"Cac phan tu cua dslk theo chieu nguoc: \n"	;
    while (last != NULL) {  
        cout<< last -> data;
        last = last->prev;  
    }  
}  
  
int main()  {  
    struct Node* head = NULL;  
    push(&head, 4);  
    push(&head, 6);  
    push(&head, 7);  
    insertBefore(&head, head->next, 8);
	printf("\n");  
    printList(head);  
  
    getchar();  
    return 0;  
}



  
