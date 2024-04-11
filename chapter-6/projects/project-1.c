#include <stdio.h>

int main(void)
{
	float n, max = 0;
		
	do {
		printf("Enter a number: ");
		scanf("%f", &n);
		max = max > n ? max : n;
	} while (n > 0);

	printf("\nThe largest number entered was %.2f", max);

	return 0;
}
