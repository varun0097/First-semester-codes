#include <stdio.h>
#include <math.h>

int main() {
	int n, last_digit, res;
	printf("Enter a number (more than 2 digits): ");
	scanf("%d", &n);
	
	
	while(1) {
		last_digit = n % 10; 
		res = (n - last_digit) / 10;
		break;
	}
	
	printf("result = %d \n", res);
	return 0;
}
