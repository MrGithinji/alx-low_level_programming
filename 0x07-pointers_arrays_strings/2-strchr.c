#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 *
 * @s: string to locate
 * @c: character to locate in s
 *
 * Return: pointer to first instance of c, or NULL
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (*(s + x))
	{
		if (*(s + x) == c)
			return (s + x);
		x++;
	}
	if (*(s + x) == c)
		return (s + x);
	return (NULL);
}
