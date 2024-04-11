#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int vowels = 0;
	char ch;

	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n') {
		switch (tolower(ch)) {
			case 'a': case 'e': case 'i': case 'o': case 'u':
				vowels++;
				break;
		}
	}
	printf("Your sentence contains %d vowels.", vowels);

	return 0;
}
