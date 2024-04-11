#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double operand, value;
	char ch;

	printf("Enter an expression: ");
	scanf("%lf", &operand);

	value = operand;

	while ((ch = getchar()) != '\n') {
		switch (ch) {
			case '+':
				scanf("%lf", &operand);
				value += operand;
				break;
			case '-':
				scanf("%lf", &operand);
                                value -= operand;
				break;
			case '*':
				scanf("%lf", &operand);
                                value *= operand;
				break;
			case '/':
				scanf("%lf", &operand);
                                value /= operand;
				break;
			default:
				break;
		}
	}

	printf("Value of expression: %.1f", value);

	return 0;
}
