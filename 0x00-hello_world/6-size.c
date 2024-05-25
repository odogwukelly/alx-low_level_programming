#include <stdio.h>
/**
	This program demonstrates how to find the size of various data types on your system.
	code by odogwu kelly
	Return: 0
*/


int main(void) {
  // Declare variables of different data types
  char a;  // Stores a single character (usually 1 byte)
  int b;   // Stores an integer (size varies, often 2 or 4 bytes)
  long int c;  // Stores a larger integer (size varies, often 4 or 8 bytes)
  long long int d; // Stores an even larger integer (size varies, frequently 8 bytes)
  float f;  // Stores a single-precision floating-point number (usually 4 bytes)

  // Print the size of each data type in bytes using the sizeof operator
  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
  printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
  printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
  printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
  printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

  return 0; // Indicate successful program termination
}
