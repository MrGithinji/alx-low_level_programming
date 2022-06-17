#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * reverse_array - reverses an arry
 * @s: sample string
 * Return: *s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
