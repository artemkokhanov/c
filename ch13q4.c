#include <stdio.h>
#include <string.h>
#include <ctype.h> // isspace is in this library

#define N 10

void print_line(char *str);
int read_line_a(char str[], int n);
int read_line_b(char str[], int n);
int read_line_c(char str[], int n);
int read_line_d(char str[], int n);

int main(){

	char A[N];

	printf("Enter a message that is 10 characters: \n");

	read_line_d(A, N);
	print_line(A);

}

void print_line(char *str){

	char *p;

	for(p = str; *p != '\0'; p++){
		printf("%c", *p);
	}

	printf("\n");

	return;
}

int read_line_a(char str[], int n){

	int ch, i=0;

	while((ch = getchar()) != '\n'){

		if(i == 0 && isspace(ch)){
			;                      // do nothing
		}else{
			if(i < n){
				str[i++] = ch;
			}
		}

	}

	str[i] = '\0';
	return i;
}

int read_line_b(char str[], int n){

	int ch, i=0;

	while(!isspace(ch = getchar())){  // stop reading when u see a space
		if(i < n){
			str[i++] = ch;
		}
	}

	str[i] = '\0';

	return i;
}

// non-optimal solution (from github)

/*
int read_line_c(char str[], int n)
{
    int ch, i = 0;

    do {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    } while (ch != '\n');
    str[i] = '\0';
    return i;
}
*/

// non-optimal solution

int read_line_c(char str[], int n){

	int ch, i=0;

	while((ch = getchar()) != '\n'){
		if(i < n){
			str[i++] = ch;
		}
	}

	str[i] = '\n';

	str[i+1] = '\0';

	return i;
}

int read_line_d(char str[], int n)
{
    int i, ch;

    for (i = 0; i < n - 1; i++) {
        ch = getchar();

        if (ch == '\n'){
            break;
        }

        str[i] = ch;
    }

    str[i] = '\0';

    return i;
}













