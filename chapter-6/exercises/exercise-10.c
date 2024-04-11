// Calculates the sum of 5 nonzero integers

#include <stdio.h>

int main(void)
{
	int n1, n2, sum1, sum2, i, j;

	printf("*** continue statement version ***\n");
	n1 = 0;
	sum1 = 0;
	while(n1 < 5) {
		printf("Enter integer %d (nonzero): ", n1 + 1);
		scanf("%d", &i);
		if (i == 0) continue;
		sum1 += i;
		n1++;
	}
	printf("Sum: %d\n", sum1);
	
	printf("*** goto statement version ***\n");
	n2 = 0;
	sum2 = 0;
	while(n2 < 5) {
		
		printf("Enter integer %d (nonzero): ", n2 + 1);
		scanf("%d", &j);
		if (j == 0) goto skip;
		sum2 += j;
		n2++;
		skip: ;
	}
	printf("Sum: %d\n", sum2);

	return 0;
}
