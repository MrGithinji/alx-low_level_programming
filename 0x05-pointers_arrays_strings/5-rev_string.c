#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints a string, in reverse.
 *
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int j;
	int k;

	j = strlen(s);
	k = j - 1;

	while (s[k])
	{
		_putchar(s[k]);
		k--;
	}
}
