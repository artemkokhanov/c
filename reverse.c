#include <stdio.h>

#define N 10

int main(){
	
	int a[N];
	int *p;

	printf("Please enter %d numbers: ", N);

	for(p = a; p < a + N; p++){
		scanf(" %d", p);        // p is already pointing to the array therefore do not need an &
	}

	for(p = (a + N) - 1; p >= a; p--){
		printf("%d ", *p);
	}

	printf("\n");
	
	return 0;
}