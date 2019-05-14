#include <stdio.h>

double inner_product(const double *a, const double *b, int n){

	int product = 0;

	for(int i=0; i<n; i++){
		product += (a[i]*b[i]);
	}

	return product;
}

int main(){

	double A[] = {1,2,3,4};
	double B[] = {4,3,2,1};
	int result;

	result = inner_product(A, B, 4);

	printf("Result: %d\n", result);

	return 0;
}