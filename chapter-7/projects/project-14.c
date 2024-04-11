#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, initial_guess = 1;
	double old_y, y, avg;

	printf("Enter a positive number: ");
	scanf("%d", &x);

	old_y = initial_guess;
	y = avg = (old_y + x / old_y) / 2;
	while (fabs(old_y - y) >= y * .00001) {
		old_y = y;
		y = avg = (old_y + x / old_y) / 2;
	}

	printf("Square root: %lf", avg);

	return 0;
}
