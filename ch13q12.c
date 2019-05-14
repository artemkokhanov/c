#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

void get_extension(const char *file_name, char *extension){

	while(*file_name){

		if(*file_name++ == '.'){

			strcpy(extension, file_name);

			return; // return here or else will copy and empty string into extension
		}
	}

	strcpy(extension, "");
}

int main(){

	char filename[] = {"bacon.txt"};
	char file_extension[20];

	get_extension(filename, file_extension);

	printf("File name: %s, File extension: %s\n", filename, file_extension);

	return 0;
}