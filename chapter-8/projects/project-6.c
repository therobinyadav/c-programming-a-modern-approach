#include <stdio.h>
#include <ctype.h>

#define SIZE ((int) (sizeof(msg_chars) / sizeof(msg_chars[0])))

int main(void)
{
  char ch, msg_chars[100];
  int msg_length = 0;

  printf("Enter message: ");
  for (int i = 0; i < SIZE; i++) {
    scanf("%c", &ch);
    if (ch == '\n') break;
    msg_chars[i] = ch;
    msg_length++;
  }

  printf("In B1FF-speak: ");
  for (int i = 0; i < msg_length; i++) {
    switch (toupper(msg_chars[i])) {
      case 'A': printf("%d", 4); break;
      case 'B': printf("%d", 8); break;
      case 'E': printf("%d", 3); break;
      case 'I': printf("%d", 1); break;
      case 'O': printf("%d", 0); break;
      case 'S': printf("%d", 5); break;
      default: printf("%c", toupper(msg_chars[i]));
    }
  }
  printf("!!!!!!!!!!\n");

  return 0;
}