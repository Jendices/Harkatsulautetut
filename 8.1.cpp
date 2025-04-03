//Now, repeat the same operation, but with pre-incrementing a. 
//Now print a and b. Do you see expected results?

#include <stdio.h>

int main() {
  int a = 5;
  int b = ++a;

  printf("a: %d, b: %d\n", a, b);

  return 0;
}

