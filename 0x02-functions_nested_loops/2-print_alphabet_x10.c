#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: Prints the alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
