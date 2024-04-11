#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool weekend[7] = {false};
  weekend[0] = true;
  weekend[6] = true;

  for (int i = 0; i < 7; i++) {
    printf("%d ", weekend[i]);
  }

  return 0;
}