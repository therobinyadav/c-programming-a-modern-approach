#include <stdio.h>

int main(void)
{
	int a, b, c, d, min, max;

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	max = a > b ? a : b;
	max = c > d ? (c > max ? c : max) : (d > max ? d : max);
	min = a < b ? a : b;
	min = c < d ? (c < min ? c : min) : (d < min ? d : min);

        printf("Largest: %d\n", max);
	printf("Smallest: %d\n", min);

	return 0;
}
