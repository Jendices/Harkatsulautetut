//W9. Declare an integer variable a and set it to 4. 
//Left shift a by 1 position using the shift left operator. Print a. What do you see?  

#include <stdio.h>

int main() {
  int a = 4;
  a = a << 1;
  a = a << 1;
  a = a >> 1; // Left shift by 1 position

  printf("a: %d\n", a);

  return 0;
}