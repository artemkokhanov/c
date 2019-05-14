#include <stdio.h>



unsigned int count_ones(unsigned char ch){

	short count;

	while(ch > 0){

		if(ch & 1){
			count++;
		}

		ch >>= 1;

	}

	return count;

}

int main(){

	unsigned char ch = 253; // 11111101 in binary

	short result;

	result = count_ones(ch);

	printf("%d\n", result);

	return 0;
}