#include "holberton.h"

/**
 * _islower - checks for lowercase letters
 * @c: character being checked
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
