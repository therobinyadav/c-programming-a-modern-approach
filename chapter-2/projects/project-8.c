#include <stdio.h>

int main(void)
{
	float loan_amount, interest_rate, monthly_payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	float monthly_interest_rate = (interest_rate / 100) / 12;
	float balance = loan_amount;

	printf("\n");

	balance = balance - monthly_payment + balance * monthly_interest_rate;
	printf("Balance remaining after first payment: $%.2f\n", balance);

	balance = balance - monthly_payment + balance * monthly_interest_rate;
	printf("Balance remaining after second payment: $%.2f\n", balance);

	balance = balance - monthly_payment + balance * monthly_interest_rate;
	printf("Balance remaining after third payment: $%.2f\n", balance);

	return 0;
}
