#include <stdio.h>

struct time{
	int hours;
	int minutes;
	int seconds;
};

struct time split_time(long total_seconds);

struct time split_time(long total_seconds){

	struct time p;

	p.hours = total_seconds / 3600;
	total_seconds %= 3600;
	p.minutes = total_seconds / 60;
	total_seconds %= 60;
	p.seconds = total_seconds;

	return p;
}

int main(){

	long seconds;
	struct time time1;

	printf("Please enter the amount of seconds: \n");
	scanf("%ld", &seconds);

	while(seconds <= 1 || seconds >= 86400){
		printf("Please enter a valid number of seconds after midnight(b/w 1 & 86400: \n");
		scanf("%ld", &seconds);
	}

	time1 = split_time(seconds);

	printf("Seconds: %ld, Time: %.2d:%.2d:%.2d\n", seconds, time1.hours, time1.minutes, time1. seconds);


	return 0;
}
