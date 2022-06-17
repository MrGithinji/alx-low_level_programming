#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @src: string 1
 * @dest: src will be appended here
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest++)
		dest--;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
