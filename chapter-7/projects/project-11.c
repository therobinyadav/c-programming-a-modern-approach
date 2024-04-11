#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char ch, first_initial;
	bool last_name_began = false;

	printf("Enter a first and last name: ");
	scanf(" %c", &first_initial);
	while((ch = getchar()) != '\n') {
		if (ch == ' ') {
			last_name_began = true;
		}
		if (last_name_began && ch != ' ') {
			putchar(ch);
		}
	}
	printf(", %c.", first_initial);

	return 0;
}
