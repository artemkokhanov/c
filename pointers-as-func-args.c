#include <stdio.h>

// an example of calling by reference

void increment(int *p){ // initalizing a pointer to an integer

	*p = (*p) + 1; // *p because need to dereference (work with value of a, not address)

}

int main(){

	int a = 10;

	increment(&a);

	printf("a = %d\n", a);

	return 0;
}