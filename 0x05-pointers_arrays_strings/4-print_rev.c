#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int j;
	int k;

	j = strlen(s);
	k = j - 1;

	while (str[k])
	{
		_putchar(str[k]);
		k--;
	}
	_putchar('\n');
}
