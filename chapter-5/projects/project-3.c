// Calculates a broker's commission

#include <stdio.h>

int main(void)
{
	int total_shares;
	float original_commission, rival_commission, price_per_share, value;

	printf("Enter total number of shares: ");
	scanf("%d", &total_shares);
	printf("Enter price per share: ");
	scanf("%f", &price_per_share);

	value = total_shares * price_per_share;
	if (value < 2500.00f) {
		original_commission = 30.00f + .017f * value;
	} else if (value < 6250.00f) {
		original_commission = 56.00f + .0066f * value;
	} else if (value < 20000.00f) {
		original_commission = 76.00f + .0034f * value;
	} else if (value < 50000.00f) {
		original_commission = 100.00f + .0022f * value;
	} else if (value < 500000.00f) {
		original_commission = 155.00f + .0011f * value;
	} else {
		original_commission = 255.00f + .0009f * value;
	}

	if (original_commission < 39.00f) {
		original_commission = 39.00f;
	}

	printf("Commission (original broker): $%.2f\n", original_commission);

	if (total_shares < 2000) {
		rival_commission = 33.00f + 0.03f * total_shares;
	} else {
		rival_commission = 33.00f + 0.02f * total_shares;
	}

	printf("Commission (rival broker): $%.2f\n", rival_commission);

	return 0;
}
