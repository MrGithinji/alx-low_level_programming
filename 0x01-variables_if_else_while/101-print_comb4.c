#include <stdio.h>

/**
 * main - Prints all combinations of two numbers
 *
 * Return: 0
 */

int main(void)
{
	int dig1;
	int dig2;
	int dig3;

	for (dig1 = 0; dig1 < 9; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 10; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 10; dig3++)
			{
				putchar((dig1 % 10) + '0');
				putchar((dig2 % 10) + '0');
				putchar((dig3 % 10) + '0');
				if (dig1 == 7 && dig2 == 8 && dig3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

