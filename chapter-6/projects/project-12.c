#include <stdio.h>

int main(void)
{
	float epsilon, e = 1.0f;

	printf("Enter the value of epsilon: ");
	scanf("%f", &epsilon);

	int factorial = 1;
	for (int i = 1; ; i++) {
		for (int j = i; j >= 2; j--) {
			factorial *= j;
		}

		if (1.0f / factorial < epsilon) break;

		e = e + 1.0f / factorial;
		factorial = 1;
	}
	
	printf("Value of e is: %.32f", e);

	return 0;
}
