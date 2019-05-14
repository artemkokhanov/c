#include <stdio.h>

int main(){

	int x = 6;
	int *p;
	int **q;

	p = &x;
	q = &p;

	printf("%d\n", *p);
	printf("%p\n", *q);
	printf("%d\n", *(*q));

	return 0;
}