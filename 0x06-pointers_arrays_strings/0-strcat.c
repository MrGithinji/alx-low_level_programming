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
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
