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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_purchar('\n');
}
