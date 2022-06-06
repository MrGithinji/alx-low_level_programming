#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all the numbers of base 16
*
* Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 0; ch <= 16; ch++)
	{
		putchar((ch % 16) + '0');
	}
	putchar('\n');

	return (0);
}
