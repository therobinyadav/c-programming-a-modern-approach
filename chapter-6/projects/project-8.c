#include <stdio.h>

int main(void)
{
	int total_days, start_day;

	printf("Enter number of days in month: ");
	scanf("%d", &total_days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

	for (int i = 1; i < start_day; i++) {
		printf("   ");
	}

	for (int date = 1, day = start_day; date <= 31; date++, day++) {
		printf("%3d", date);
		if (day == 7) {
			printf("\n");
			day = 0;
		}
	}

	return 0;
}
