#include <stdio.h>

int main(void)
{
	int num, octal_d1, octal_d2, octal_d3, octal_d4, octal_d5, original_num;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	original_num = num;
	octal_d5 = original_num % 8;
	original_num /= 8;
	octal_d4 = original_num % 8;
        original_num /= 8;
	octal_d3 = original_num % 8;
        original_num /= 8;
	octal_d2 = original_num % 8;
        original_num /= 8;
	octal_d1 = original_num % 8;
        original_num /= 8;

	printf("In Octal, your number is: %d%d%d%d%d", octal_d1, octal_d2, octal_d3, octal_d4, octal_d5);	

	return 0;
}
