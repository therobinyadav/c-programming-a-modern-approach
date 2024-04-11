#include <stdio.h>

int main(void)
{
	int hours, minutes;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &minutes);

	printf("Equivalent 12-hour time: ");

	if (hours == 0) {
		printf("12:%.2d AM", minutes);
	} else if (hours < 12) {
		printf("%d:%.2d AM", hours, minutes);
	} else if (hours == 12) {
		printf("12:%.2d PM",  minutes);
	} else {
		printf("%d:%.2d PM", hours - 12, minutes);
	}

	return 0;
}
