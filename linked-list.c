#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *add_to_list(struct node *head, int n){ // pointer to pointer

	struct node *new_node = malloc(sizeof(struct node));
	
	if(new_node == NULL){
		printf("Error: malloc failed in add_to_list\n");
		exit(1);
	}

	new_node->data = n;
	new_node->next = head;
	head = new_node;

	return head;
}

struct node *delete_node(struct node *head, int n){

	struct node *cur;
	struct node *prev;

	for(cur = head, prev = NULL; cur != NULL && cur->data != n; prev = cur, cur = cur->next);

	if(cur == NULL){ // n was not found
		return head;
	}

	if(prev == NULL){
		head = head->next;
	}else{
		prev->next = cur->next;
	}

	free(cur);

	return head;
}

struct node *reverse_list(struct node *head){

	struct node *current, *prev, *next;
	current = head;
	prev = NULL;

	while(current != NULL){
		next = current->next; // get address of next node
		current->next = prev;
		prev = current; // prev points to current
		current = next; // current moves forward in the list
	}

	head = prev;

	return head;
}

void print_list(struct node *head){ // this head is local to the function

	printf("List is: ");

	for(; head != NULL; head = head->next){
		printf("%d ", head->data);
	}

	printf("\n");

	return;
}

int main(){

	int n, x, delete;
	struct node *head;
	head = NULL;

	printf("How many numbers do you want in the list?: ");
	scanf(" %d", &n);

	for(int i=0; i<n; i++){
		printf("Enter number: ");
		scanf(" %d", &x);
		head = add_to_list(head, x);
		print_list(head);
	}

	printf("Enter the data of the node you want to delete: ");
	scanf(" %d", &delete);

	head = delete_node(head, delete);

	print_list(head);

	head = reverse_list(head);

	print_list(head);

	return 0;
}
