#include <stdio.h>

int main() {
  // Showcasing how in c11 there are no bool types without a library
  bool i = true;
  printf("And the bool value is : %d", i);
  // throws an error in c11 but compiles and runs just fine in c23 and prints 1
  // ie true's default integer value
  return 0;
}
