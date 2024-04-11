#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false};
  bool repeated_digits[10] = {false};
  bool has_repeated_digit = false;
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
      has_repeated_digit = true;
      repeated_digits[digit] = true;
      n /= 10;
      continue;
    };
    digit_seen[digit] = true;
    n /= 10;
  }

  if (has_repeated_digit) {
    printf("Repeated digit(s):");
    for (int i = 0; i < 10; i++) {
      if (repeated_digits[i]) {
        printf(" %d", i);
      }
    }
  } else {
    printf("No repeated digit\n");
  }

  return 0;
}