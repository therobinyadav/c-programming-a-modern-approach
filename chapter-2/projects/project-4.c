#include <stdio.h>

int main(void)
{
	float amount;
	
	printf("Enter amount: ");
	scanf("%f", &amount);

	printf("With tax added: $%.2f", amount + amount *0.05);

	return 0;
}
