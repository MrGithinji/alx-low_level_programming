#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints alphabet in lower case except q and e
*
* Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
