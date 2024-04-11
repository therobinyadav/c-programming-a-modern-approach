#include <stdio.h>

int main(void)
{
	int numerator, denominator, m, n, remainder, gcd;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	m = numerator;
	n = denominator;
	while (n) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	gcd = m;
	numerator /= gcd;
	denominator /= gcd;

	printf("In lowest terms: %d/%d", numerator, denominator);

	return 0;
}
