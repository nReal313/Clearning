#include <stdio.h>

int main(void) {
  // demonstrating switch fall through in C
  int a = 1;
  switch (a) {
  case 1:
    printf("I ran cuz a was %d\n", a);
  case 2:
    printf("I ran cuz either a was 2 or stupid author forgot to put a break\n");
    break;
  case 3:
    printf("I just ran cuz a was %d\n", a);
    break;
  }
  return 0;
}
