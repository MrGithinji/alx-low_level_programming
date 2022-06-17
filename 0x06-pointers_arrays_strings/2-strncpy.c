#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - copies a string
 *
 * @dest: string 1
 * @src: string 2
 * @n: max size of copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
