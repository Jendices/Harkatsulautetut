//W5. Declare a character variable ch and set it to ‘A’. 
//Add 1 to ch. Print the result. What do you see? Print the same again, 
//but use %d as the format specifier. What do you see? Now, set ch = 128.
//Print the same again,
 //using %d as the format specifier. What do you see? 

 // When you add 1 to the character 'A' (ch = ch + 1;), you are adding 1 to its ASCII value.
//Therefore, 65 + 1 = 66.

 #include <stdio.h>

 int main() {
   char ch = 'A';
   ch = ch + 1;
   printf("%c\n", ch); // Print as a character
   printf("%d\n", ch); // Print as an integer
 
   return 0;
 }