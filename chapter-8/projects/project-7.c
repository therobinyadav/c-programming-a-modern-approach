#include <stdio.h>

int main(void)
{
  int integers[5][5];
  int row_sum = 0;
  int col_sum = 0;

  for (int row = 0; row < 5; row++) {
    printf("Enter row %d: ", row + 1);
    for (int col = 0; col < 5; col++) {
      scanf("%d", &integers[row][col]);
    }
  }

  printf("\nRow totals:");
  for (int row = 0; row < 5; row++) {
    for (int col = 0; col < 5; col++) {
      row_sum += integers[row][col];
    }
    printf(" %d", row_sum);
    row_sum = 0;
  }

  printf("\nColumn totals:");
  for (int col = 0; col < 5; col++) {
    for (int row = 0; row < 5; row++) {
      col_sum += integers[row][col];
    }
    printf(" %d", col_sum);
    col_sum = 0;
  }

  return 0;
}