#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false};
  int digit;
  long n;

  while (true) {
    printf("Enter a number (negative or 0 to quit): ");
    scanf("%ld", &n);

    if (n <= 0) return 0;

    while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit]) break;
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0) {
      printf("Repeated digit\n");
    } else {
      printf("No repeated digit\n");
    }

    for (int i = 0; i < 10; i++) {
      digit_seen[i] = false;
    }
  }
}