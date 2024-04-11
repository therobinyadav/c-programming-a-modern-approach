#include <stdio.h>

int main(void)
{
  int digits[10];
  char d = '0';

  for (int i = 0; i < (int) (sizeof(digits) / sizeof(digits[0])); i++) {
    digits[d - '0' + i] = d + i;
    printf("%c\n", digits[i]);
  }

  return 0;
}