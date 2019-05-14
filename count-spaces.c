#include <stdio.h>
#include <string.h>

// pointer arithmetic

int count_spaces(const char *s){

	int count = 0;

	for(; *s != '\0'; s++){
		if(*s == ' '){
			count++;
		}
	}

	return count;
}

// array subscripting

/*int count_spaces(const char str[]){

	int count = 0;

	for(int i=0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			count++;
		}
	}

	return count;
}*/

int main(){

	char array[20] = {"Artem is great"};
	int spaces=0;

	spaces = count_spaces(array);

	printf("Number of spaces in array: %d\n", spaces);

	return 0;
}