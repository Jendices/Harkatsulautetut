//W8. Declare two integer variables a and b. Set a value to 5. 
//Next, post increment a and assign it to b. Print a and b. Do you see expected results? 
// If not, what is the reason for the unexpected output? 


#include <stdio.h>

int main() {
  int a = 5;
  int b = a++;

  printf("a: %d, b: %d\n", a, b);

  return 0;
}