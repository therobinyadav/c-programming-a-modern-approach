#include <stdio.h>

int main(void)
{
	// (a) 7
	// (b) 12
	// (c) 12
	// (d) 20
	// (e) 34
	// (f) 170
	// (g) 1754

	int n;
	// short factorial = 1;
	int factorial = 1;
	// long factorial = 1;
	// long long factorial = 1;
	// float factorial = 1.0f;
	// double factorial = 1.0;
	// long double factorial = 1.0L;

	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	for (int i = 2; i <= n; i++) {
		factorial *= i;
	}

	// printf("Factorial of %d: %hd", n, factorial);
	printf("Factorial of %d: %d", n, factorial);
	// printf("Factorial of %d: %ld", n, factorial);
	// printf("Factorial of %d: %lld", n, factorial);
	// printf("Factorial of %d: %f", n, factorial);
	// printf("Factorial of %d: %f", n, factorial);
	// printf("Factorial of %d: %Lf", n, factorial);

	return 0;
}
