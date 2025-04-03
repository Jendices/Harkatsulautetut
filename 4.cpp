#include <stdio.h>

int main() {
    char charVar;
    short int shortIntVar;
    int intVar;
    float floatVar;
    double doubleVar;
    long longVar;
    long long longLongVar;
    
    printf("Size of char: %zu bytes\n", sizeof(charVar));
    printf("Size of short int: %zu bytes\n", sizeof(shortIntVar));
    printf("Size of int: %zu bytes\n", sizeof(intVar));
    printf("Size of float: %zu bytes\n", sizeof(floatVar));
    printf("Size of double: %zu bytes\n", sizeof(doubleVar));
    printf("Size of long: %zu bytes\n", sizeof(longVar));
    printf("Size of long long: %zu bytes\n", sizeof(longLongVar));

    return 0;
}