#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_LENGTH 4

int A[MAX_LENGTH];
int front = -1;
int rear = -1;

bool IsEmpty(){

	if(front == -1 && rear == -1){
		return true;
	
	}else{
		return false;
	}

}

bool IsFull(){

	if(rear+1%MAX_LENGTH == front){
		return true;
	}else{
		return false;
	}

}

void Enqueue(int x){

	if(IsFull()){
		printf("Queue is full\n");
		return;
	}

	if(IsEmpty()){
		front = rear = 0;
	}else{
		rear = (rear+1)%MAX_LENGTH;
	}

	A[rear] = x;

	return;
}

void Dequeue(){

	if(IsEmpty()){
		printf("Queue is empty\n");
		return;
	}

	if(front == rear){
		front = rear = -1;
	}else{
		front = (front+1)%MAX_LENGTH;
	}

	return;
}

void print_queue(){

	printf("Queue: ");

	int length = (rear+MAX_LENGTH-front)%MAX_LENGTH+1;
	for(int i=0; i<length; i++){
		printf("%d ", A[(front+i)%MAX_LENGTH]);
	}

	printf("\n");

	return;

}

int main(){

	Enqueue(1);
	print_queue();
	Enqueue(2);
	print_queue();
	Enqueue(3);
	print_queue();
	Dequeue();
	Enqueue(4);
	print_queue();

	return 0;
}







