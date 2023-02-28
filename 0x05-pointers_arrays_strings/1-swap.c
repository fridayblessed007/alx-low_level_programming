#include "main.h"

/**
 * swap_int - swaps the value of integers a and b
 * @a: A pointer to an int would be updated
 * @b: B pointer to an int would be updated
 * Return: void that means our answer is correct
 */
void swap_int (int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
