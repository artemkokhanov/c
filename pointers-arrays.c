#include <stdio.h>

int main(){
	
	int A[] = {1,2,3,4,5};

	int *p;

	p = A;

	for(int i=0; i<5; i++){
		printf("%d\n", &A[i]); // address of element at index i
		printf("%d\n", A+i); // address of element at index i
		printf("%d\n", A[i]); // value of element at index i
		printf("%d\n", *(A+i)); // value of element at index i
		printf("%d\n", *(p+i)); // value of element at index i
	}

	return 0;
}