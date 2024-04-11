#include <stdio.h>

int main(void)
{
	int total_words = 0;
	float avg_word_length = 0;
	char ch;

	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			total_words++;
		} else {
			avg_word_length++;
		}
	}

	total_words++; // Including last word
	avg_word_length /= total_words;
	printf("Average word length: %.1f", avg_word_length);

	return 0;
}
