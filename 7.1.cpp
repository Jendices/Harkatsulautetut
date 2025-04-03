#include <stdio.h>

int main() {
  const int MAX = 100;
  MAX = 150;


  // You can now use MAX in your code, but you cannot change its value.

  printf("The value of MAX is: %d\n", MAX); 

  return 0;
}