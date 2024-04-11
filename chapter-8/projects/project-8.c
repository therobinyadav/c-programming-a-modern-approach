#include <stdio.h>

#define NUM_QUIZZES  5
#define NUM_STUDENTS 5

int main(void)
{
  int grades[NUM_QUIZZES][NUM_STUDENTS];
  int total, high, low;

  for (int i = 0; i < 5; i++) {
    printf("Enter quiz grades of student %d: ", i + 1);
    for (int j = 0; j < 5; j++) {
      scanf("%d", &grades[i][j]);
    }
  }

  printf("\nStudent   Total   Average\n");
  for (int student = 0; student < NUM_STUDENTS; student++) {
    total = 0;
    printf("%4d       ", student + 1);
    for (int quiz = 0, grade; quiz < NUM_QUIZZES; quiz++) {
      grade = grades[student][quiz];
      total += grade;
    }
    printf("%3d      %3d\n", total, total / 5);
  }

  printf("\nQuiz   Average   High   Low\n");
  for (int quiz = 0; quiz < NUM_QUIZZES; quiz++) {
    total = 0;
    high = 0;
    low = 100;
    printf("%3d      ", quiz + 1);
    for (int student = 0, grade; student < NUM_STUDENTS; student++) {
      grade = grades[student][quiz];
      total += grade;
      if (grade > high) high = grade;
      if (grade < low) low = grade;
    }
    printf("%3d     %3d    %3d\n", total / 5, high, low);
  }

  return 0;
}
