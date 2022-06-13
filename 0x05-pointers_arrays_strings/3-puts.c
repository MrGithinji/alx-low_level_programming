#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;
	int j;

	j = strlen(str);

	for (i = 0; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
