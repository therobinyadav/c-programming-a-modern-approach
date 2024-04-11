#include <stdio.h>

int main(void)
{
	int n;
	float e = 1.0f;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	int factorial = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j >= 2; j--) {
			factorial *= j;
		}

		e = e + 1.0f / factorial;
		factorial = 1;
	}
	
	printf("Value of e is: %.32f", e);

	return 0;
}
