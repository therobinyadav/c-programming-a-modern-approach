#include <stdio.h>

int main(void)
{
	int month, day, year, prev_month, prev_day, prev_year, min_month, min_day, min_year;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	min_month = month;
	min_day = day;
	min_year = year;

	while (month != 0 && day != 0 && year != 0) {
		prev_month = month;
		prev_day = day;
		prev_year = year;

		printf("Enter a date (mm/dd/yy): ");
                scanf("%d/%d/%d", &month, &day, &year);

		if (month == 0 && day == 0 && year == 0) break;

		if (prev_year < year) {
			min_month = prev_month;
			min_day = prev_day;
			min_year = prev_year;
		} else if (year < prev_year) {
			min_month = month;
			min_day = day;
			min_year = year;
		} else if (prev_month < month) {
                        min_month = prev_month;
                        min_day = prev_day;
                        min_year = prev_year;
                } else if (month < prev_month) {
                        min_month = month;
                        min_day = day;
                        min_year = year;
                } else if (prev_day < day) {
                        min_month = prev_month;
                        min_day = prev_day;
                        min_year = prev_year;
                } else if (day < prev_day) {
                        min_month = month;
                        min_day = day;
                        min_year = year;
                }
	}

	if (min_month != 0 && min_day !=0 && min_year != 0) {
		printf("%d/%d/%.2d is the earliest date", min_month, min_day, min_year);
	}

	return 0;
}
