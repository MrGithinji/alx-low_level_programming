#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -  Prints 0 to 9
*
* Return: 0
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(', ');
	}
	putchar('\n');
	return (0);
}
