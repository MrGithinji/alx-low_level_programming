#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - prints a string, in reverse.
 *
 * @s: string to be printed
 */

int _strlen_recursion(char *s)
{
	int j;
	int k;

	j = strlen(str);
	k = j - 1;

	while (str[k])
	{
		_putchar(str[k]);
		k--;
	}
}
