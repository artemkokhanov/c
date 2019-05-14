#include <stdio.h>
#include <string.h>

struct part{
	int number;
	char name[6];
	int on_hand;
};

void print_part(struct part p);
struct part build_part(int number, const char *name, int on_hand);

int main(){

	struct part part1 = {1, "Artem", 2};

	struct part part2;

	print_part(part1); // can use structures as arguments

	part2 = build_part(2, "aaaaa", 3);

	print_part(part2);

	return 0;
}

// prints structure members

void print_part(struct part p){

	printf("Part number: %d\n", p.number);
	printf("Part name: %s\n", p.name);
	printf("Parts on hand: %d\n", p.on_hand);

	return;
}

// returns a part structure

struct part build_part(int number, const char *name, int on_hand){

	struct part p;

	p.number = number;
	strcpy(p.name, name);
	p.on_hand = on_hand;

	return p;
}