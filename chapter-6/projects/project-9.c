#include <stdio.h>

int main(void)
{
	int total_payments;
	float loan_amount, interest_rate, monthly_payment;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	printf("Enter total number of payments: ");
	scanf("%d", &total_payments);

	float monthly_interest_rate = (interest_rate / 100) / 12;
	float balance = loan_amount;

	printf("\n");

	for (int i = 1; i <= total_payments; i++) {
		balance = balance - monthly_payment + balance * monthly_interest_rate;
		printf("Balance remaining after payment %d: $%.2f\n", i, balance);
	}

	return 0;
}
