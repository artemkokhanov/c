#include <stdio.h>

int Add(int *A, int size){

	int sum = 0;

	for(int i=0; i<size; i++){

		sum += A[i]; // same as *(A+i)

	}

	return sum;
}

int main(){

	int A[] = {1,2,3,4,5};
	int array_size = sizeof(A) / sizeof(A[0]);

	int result = Add(A, array_size); // A is same as &A[0] also passing by reference changes values in array

	printf("%d\n", result);

	return 0;
}