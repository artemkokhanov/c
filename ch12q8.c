#include <stdio.h>

#define N 5

void store_zeroes(int a[], int n){

	int *p;

	for(p = a; p<a+n; p++){
		*p = 0;
	}

	return;
}

int main(){

	int A[] = {1,2,3,4,5};

	printf("Initial array: \n");

	for(int i=0; i<N; i++){
		printf("%d\n", A[i]);
	}

	store_zeroes(A, N);

	printf("Array cleared: \n");

	for(int i=0; i<N; i++){
		printf("%d\n", A[i]);
	}

	return 0;
}