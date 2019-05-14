#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// computes the length of the string

size_t strlen(const char *s){

	size_t n = 0;

	for(; *s != '\0'; s++){
		n++;
	}

	return n;
}

int main(){

	char A[]={"abcdefg"};
	int length;

	length = strlen(A);

	printf("Length of array A: %d\n", length);

	return 0;
}