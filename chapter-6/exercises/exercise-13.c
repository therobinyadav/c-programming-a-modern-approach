#include <stdio.h>

int main(void)
{
	int n, m = 8;
	for (n = 0; m > 0; m /= 2, n++)
		;
	printf("%d %d", n, m);

	return 0;
}
