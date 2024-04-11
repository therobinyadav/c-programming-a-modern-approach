#include <stdio.h>

#define PI 3.14f

int main(void)
{
	int radius = 10;
	float volume = (4.0f / 3.0f) * PI * radius * radius * radius;

	printf("Volume of the sphere is: %f", volume);

	return 0;
}
