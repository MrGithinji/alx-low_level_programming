#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by a new line.
 *
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;
	int j;

	j = strlen(str);

	for (i = 0; i < j; i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
