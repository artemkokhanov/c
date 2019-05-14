#include <stdio.h>

#define N 10

int main(){
	
	int a[N], sum = 0;
	int *p;

	printf("Enter 10 numbers to sum: \n");

	for(int i=0; i<N; i++){
		scanf(" %d", &a[i]);
	}

	printf("Summing the elements in the array...\n");

	p = a; // p is pointing to the first element in the array a

	for(int i=0; i<N; i++){
		sum += p[i]; // C allows us to subscript a pointer as if it were an array name
	}                // compiler treats p[i] as *(p+i)

	/*for(int i=0; i<N; i++){
		sum += *p;
		p++;
	}*/

	/*for(p = a; p < a + N; p++){
		sum += *p;
	}*/

	printf("Sum of the elements in the array: %d\n", sum);

	return 0;
}