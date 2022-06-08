#include "main.h"

/**
 * _islower - checks is character is lower case
 *
 *  Return: 1 or 0
 *
 */

int _islower(int c);
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
