#include <stdio.h>
/**
 * main - C program hat prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */

int main(void)
{   
	              int a;
		      long int b;
		      long long int c;
		      char d;
		      float f;

		      printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));

		      printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));

		      printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));

		      printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));

		      printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	                       

	return (0);

	}
