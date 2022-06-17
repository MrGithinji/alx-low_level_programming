#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @src: string 1
 * @6dest: src will be appended here
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest++)
		dest--;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
