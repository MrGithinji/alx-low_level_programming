#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints alphabet in lower case
*
* Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
