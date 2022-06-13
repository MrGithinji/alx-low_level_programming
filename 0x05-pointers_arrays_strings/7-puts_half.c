#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int j;
	int k;

	j = strlen(str);
	i = j / 2;
	k = i - 1;

	while (str[k])
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
