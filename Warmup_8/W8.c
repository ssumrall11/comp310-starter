#include <stdio.h>
#include <stdlib.h>

struct Node {
	struct Node *next;
	int data;	
};
struct Node* push (struct Node *head, int nd);
struct Node* delNode(struct Node *head, int key);
void printList(struct Node *head);
int main(void){
	struct Node *head = NULL;
	head = push(head, 7);
	head = push(head, 1);
	head = push(head, 3);
	head = push(head, 2);
	//printList(head);
	printf("The Linked List is:\n");
	printList(head);
	head = delNode(head, 1);
	//printList(head);
	printf("Linked List after Deletion:\n");
	printList(head);
}
struct Node* push (struct Node *head, int nd){
	struct Node *nn = malloc(sizeof(struct Node));
	nn->data = nd;
	nn->next = head;
	return nn;
}
struct Node* delNode(struct Node *head, int key){
	struct Node *temp = head;
	struct Node *prev = NULL;
	
	if(temp != NULL&& temp->data == key){
		head = temp->next;
		free(temp);
		return head;
	}
	while(temp != NULL && temp->data != key){
		prev = temp;
		temp = temp->next;
	}
	if(temp == NULL){
		return head;
	}
	prev->next = temp->next;
	free(temp);
	return head;
}
void printList(struct Node *head){
	struct Node *t = head;
	while(t!=NULL){
		printf("%d \n", t->data);
		t = t->next;
	}
}

// I used the CH19 slides, CHATGPT and the textbook for guidance and help. 
