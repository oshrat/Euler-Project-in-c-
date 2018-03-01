#include <stdio.h>

#define LIMIT 1000000

int collatz(unsigned long n);

int main(void)
{
	int i = 0, num = 0;
	unsigned long n = 0;
	int curr = 0;
	int max = 0;
	
	for(i = 0; i < LIMIT; i++){
		curr = collatz(i);
		if(curr > max){
			max = curr;
			num = i;
		}
	//	printf("num: %d, length: %d\n", i, curr);
	}


	printf("max num: %d\n", num);
	return 0;
}

int collatz(unsigned long n){
	int counter = 1;
	while(n > 1){
		counter++;
	//	printf("%d, ", n);
		if(n%2 == 0){
			n = n/2;
		}
		else{
			n = 3*n + 1;
		}
	}
//	printf("counter: %d\n", counter);
	return counter;
}

