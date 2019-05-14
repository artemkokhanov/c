#include <stdio.h>

struct file_date{          // bit fields to create a calendar layout
	unsigned int day: 5;
	unsigned int month: 4;
	unsigned int year: 7;
};

int main(){

	struct file_date fd;

	fd.day = 28;
	fd.month = 12;
	fd.year = 8; // represents 1988

	// appearance of this: 0001000 1100 11100
	// & cannot be applied to a bit field

	return 0;
}
