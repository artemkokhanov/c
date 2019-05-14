#include <stdio.h>

#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;
void print_stack();

void Push(int value);
void Pop();
int Top();

void Push(int value){

	if(top == MAX_SIZE - 1){
		printf("Stack overflow\n");
		return;
	}

	top++;
	A[top] = value;

	return;
}

void Pop(){

	top--;

}

int Top(){

	return A[top];

}

void print_stack(){

	printf("Stack: ");

	for(int i=0; i<=top; i++){
		printf("%d ", A[i]);
	}

	printf("\n");

	return;
}

int main(){

	Push(1);
	print_stack();
	Push(2);
	print_stack();
	Push(3);
	print_stack();
	Pop();
	Push(5);
	print_stack();

	return 0;
}