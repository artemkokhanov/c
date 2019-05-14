#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(const char *s1, const char *s2){

	char *p;

	p = malloc(strlen(s1) + strlen(s2) + 1);

	if(!p){ // non-null pointers test true. Could've written p == NULL
		printf("Error: malloc failed in concat\n");
		exit(EXIT_FAILURE);
	}

	strcpy(p, s1);
	strcat(p, s2);

	return p;
}

int main(){

	char A[] = {"abc"};
	char B[] = {"def"};

	char *result;

	result = concat(A, B); // result points to a dynamically allocated array

	puts(result);

	free(result); // releasing the space that the string occupies

	return 0;
}