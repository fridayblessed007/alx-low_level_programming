#include <stdio.h>

/** main - entry point
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{

	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');


        return (0);
	
}

