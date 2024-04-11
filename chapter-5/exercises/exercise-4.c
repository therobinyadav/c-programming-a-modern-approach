#include <stdio.h>

int main(void)
{
	int i, j;
	
	i = 5; j = 4;
	printf("%d", (i > j) - (i < j));

	return 0;
}
