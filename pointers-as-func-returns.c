#include <stdio.h>
#include <stdlib.h>

int *Add(int *a, int*b){ // function returns a pointer variable

	int *result = malloc(sizeof(int)); // allocate space in the heap (not using stack so result will not be overwritten)

	*result = (*a) + (*b);

	return result; // need to return a pointer variable because of function type

}

int main(){

	int x = 2, y = 4;

	int *p = Add(&x, &y); // passing by reference and storing address of result in pointer p

	printf("%d\n", *p); // prints value of whatever p is pointing to

	return 0;
}