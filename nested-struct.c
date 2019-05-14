#include <stdio.h>
#include <string.h>

struct person_name{
	char first[10];
	char middle_initial;
	char last[10];
};

struct student{
	struct person_name name;
	int id, age;
	char sex;
};

int main(){

	struct student student1;

	strcpy(student1.name.first, "Artem");

	printf("%s\n", student1.name.first);

	return 0;
}