 #include <stdio.h>

#define N 4

int binary_search(int A[], int n, int x){

	int mid, low = 0, high = n-1;

	while(low<=high){

		mid = low + (high - low) / 2; // high - low so no overflow occurs
		
		if(A[mid] == x){
			return mid;
		}else if(x < A[mid]){
			high = mid - 1;
		}else{
			low = mid + 1;
		}

	}

	return -1;
}

int main(){

	int A[] = {1, 5, 6, 8};

	int x, result;

	printf("Enter the number you want to find: \n");
	scanf("%d", &x);

	result = binary_search(A, N, x);

	if(result != -1){
		printf("Number is found in index: %d\n", result);
	}else{
		printf("Number not found\n");
	}

	return 0;
}