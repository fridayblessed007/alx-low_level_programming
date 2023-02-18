#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * return: Always 0 (Successful)
 */

int main(void)
{
	int j, i;

	for (j = 0; j <= 100; j++)
	{
		for (i = j; i <= 99; i++)
		{
			if(i != j)
			{
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar((' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				if (j * 100 + i ! = 9899)

				{
				putchar(',')
				putchar(' ');
				}
			}
			}
			}
	putchar('\n');


	return (0);
}	
