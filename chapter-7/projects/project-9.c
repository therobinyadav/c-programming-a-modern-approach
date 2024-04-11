#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int input_hh, input_mm, time24_hh, time24_mm;
	char time_period_indicator;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &input_hh, &input_mm, &time_period_indicator);

	if (tolower(time_period_indicator) == 'p') {
		time24_hh = input_hh == 12 ? input_hh : input_hh + 12;
	} else if (tolower(time_period_indicator) == 'a') {
		time24_hh = input_hh == 12 ? 0 : input_hh;
	} else {
		printf("Invalid time period indicator!");
		return 0;
	}

	time24_mm = input_mm;

	printf("Equivalent 24-hour time: %d:%.2d", time24_hh, time24_mm);

	return 0;
}
