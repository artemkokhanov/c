#include <stdio.h>

void swap(int *p, int *q);

void swap(int *p, int *q){

	int temp;

	temp = *p;
	*p = *q;
	*q = temp;

	return;
}

int main(){

	int a = 10, b = 20;

	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}