#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct BSTnode{
	int data;
	struct BSTnode *left;
	struct BSTnode *right;
};

struct BSTnode *new_node(int data){

	struct BSTnode *new_node = malloc(sizeof(struct BSTnode));
	new_node->data = data;
	new_node->left = new_node->right = NULL;
	return new_node;

}

struct BSTnode *insert(struct BSTnode *root, int data){

	if(root == NULL){
		root = new_node(data);
	}else if(data < root->data){
		root->left = insert(root->left, data);
	}else{
		root->right = insert(root->right, data);
	}

	return root;
}

bool search_bst(struct BSTnode *root, int data){

	if(root == NULL){
		return false;
	}else if(root->data == data){
		return true;
	}else if(data <= root->data){
		return search_bst(root->left, data);
	}else{
		return search_bst(root->right, data);
	}

}

int find_min(struct BSTnode *root){

	if(root == NULL){
		printf("Error: tree is empty\n");
		return -1;
	}

	while(root->left != NULL){
		root = root->left;
	}

	return root->data;
}

int find_max(struct BSTnode *root){

	if(root == NULL){
		printf("Error: tree is empty\n");
		return -1;
	}

	while(root->right != NULL){
		root = root->right;
	}

	return root->data;
}

/*
void preorder(struct BSTnode *root){

	if(root == NULL){
		return;
	}

	printf("%d ", root->data);
	preorder(root->left);
	preorder(root->right);

}
*/

void inorder(struct BSTnode *root){

	if(root == NULL){
		return;
	}

	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);

}

/*
void postorder(struct BSTnode *root){

	if(root == NULL){
		return;
	}

	preorder(root->left);
	preorder(root->right);
	printf("%d ", root->data);

}
*/

int main(){

	struct BSTnode *root; //  pointer to root node

	root = NULL; // setting tree to empty

	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);

	int min, max;

	min = find_min(root);
	max = find_max(root);

	printf("In-order: \n");
	inorder(root);
	printf("\n");

	printf("Max: %d, Min: %d\n", max, min);

	int number;
	printf("Enter number to be search: ");
	scanf("%d", &number);

	if(search_bst(root, number) == true){
		printf("Found\n");
	}else{
		printf("Not found\n");
	}

	return 0;
}
