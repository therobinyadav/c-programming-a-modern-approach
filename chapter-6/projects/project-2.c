#include <stdio.h>

int main(void)
{
	int m, n, remainder;

	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);

	while (n) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	printf("Greatest common divisor: %d", m);

	return 0;
}
