#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concatenates two strings
 *
 * @src: string 1
 * @dest: string 2
 * @n: n or more bytes in a string
 *
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int x,
	int y;

	x = 0;

	while (dest[x] != 0)
	{
		x++;
	}

	y = 0;

	while (src[y] != 0 && b < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
