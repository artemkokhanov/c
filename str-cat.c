#include <stdio.h>
#include <string.h>

char *str_cat(char *s1, char *s2);

// condensed verion

/*char *str_cat(char *s1, char *s2){

	char *p = s1;

	while(*p){ // *p is the value of the element of the array p is pointing to, this checks if it is null or not
		p++;
	}

	while(*s2){
		*p = *s2;
		p++;
		s2++;
	}

	*p = '\0';

	return s1;
}*/

char *str_cat(char *s1, char *s2){

	char *p = s1;

	while(*p != '\0'){
		p++;
	}

	while(*s2 != '\0'){
		*p = *s2;
		p++;
		s2++;
	}

	*p = '\0';

	return s1;  // return pointer to array
}

int main(){

	char A[] = {"abcdef"};
	char B[] = {"ghijkl"};

	str_cat(A, B);

	puts(A);

	return 0;
}