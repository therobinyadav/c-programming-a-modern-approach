#include <stdio.h>

int main(void)
{
	int n, last_digit;
	
	printf("Enter an integer: ");
	scanf("%d", &n);

	printf("The reversal is: ");
	do {
		last_digit = n % 10;
		n /= 10;
		printf("%d", last_digit);
	} while (n);

	return 0;
}
