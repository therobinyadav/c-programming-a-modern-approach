#include <stdio.h>

int main(void)
{
  float temperature_readings[30][24];
  float sum = 0.0f;

  for (int i = 0; i < 30; i++) {
    for (int j = 0; j < 24; j++) {
      sum += temperature_readings[i][j];
    }
  }

  printf("Average temperature for the month is: %.2f", sum / (30 * 24));

  return 0;
}