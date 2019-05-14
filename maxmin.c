#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(){

	int b[N], big, small;

	printf("Enter 10 numbers: ");

	for(int i=0; i<N; i++){

		scanf("%d", &b[i]);

	}

	max_min(b, N, &big, &small);

	printf("Largest number: %d\n", big);
	printf("Smallest number: %d\n", small);

	return 0;
}

void max_min(int a[], int n, int *max, int *min){

	*max = *min = *a;

	for(int i=1; i<n; i++){

		if(a[i] > *max){
			*max = a[i];
		}else{
			if(a[i] < *min){
				*min = a[i];
			}
		}

	}

	return;
}