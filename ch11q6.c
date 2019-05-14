#include <stdio.h>

#define N 10

void find_two_largest(int *a, int n, int *largest, int *second_largest);

void find_two_largest(int *a, int n, int *largest, int *second_largest){

	*largest = *a;           // derefence largest and the address of the first value in the array a
	*second_largest = *a;

	for(int i=1; i<n; i++){

		if(a[i] > *largest){
			*second_largest = *largest; // sets second_largest to largest's previous value
			*largest = a[i];
		}

	}


	return;
}

int main(){

	int a[N];
	int array_size;
	int L1;
	int L2;

	printf("Please enter 10 numbers: \n");

	for(int i=0; i<N; i++){
		scanf("%d", &a[i]);
	}

	array_size = sizeof(a) / sizeof(a[0]);

	find_two_largest(a, array_size, &L1, &L2);

	printf("Largest: %d, Second largest: %d\n", L1, L2);

	return 0;
}