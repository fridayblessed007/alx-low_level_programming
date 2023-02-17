#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - entry point
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{

	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');


        return (0);
	
}

