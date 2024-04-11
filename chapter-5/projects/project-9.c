#include <stdio.h>

int main(void)
{
	int date1_month, date1_day, date1_year, date2_month, date2_day, date2_year;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &date1_month, &date1_day, &date1_year);
	printf("Enter second date (mm/dd/yy): ");
        scanf("%d/%d/%d", &date2_month, &date2_day, &date2_year);

	if (date1_year < date2_year) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date1_month, date1_day, date1_year, date2_month, date2_day, date2_year);
	} else if (date2_year < date1_year) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date2_month, date2_day, date2_year, date1_month, date1_day, date1_year);
	} else if (date1_month < date2_month) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date1_month, date1_day, date1_year, date2_month, date2_day, date2_year);
	} else if (date2_month < date1_month) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date2_month, date2_day, date2_year, date1_month, date1_day, date1_year);
	} else if (date1_day < date2_day) {
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date1_month, date1_day, date1_year, date2_month, date2_day, date2_year);
      } else if (date2_day < date1_day) {
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d", date2_month, date2_day, date2_year, date1_month, date1_day, date1_year);
	} else {
		printf("Provided dates are the same!");
	}

	return 0;
}
