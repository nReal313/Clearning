#include <stdio.h>

int main() {
  // Checking out what size_of is and what it returns in C
  int a = 9;

  // in printf, %zu is the format specifier for return value of size_of
  printf("%zu\n", sizeof a);
  // This should be printing more than for integer
  printf("%zu\n", sizeof 3.14);
  return 0;
}
