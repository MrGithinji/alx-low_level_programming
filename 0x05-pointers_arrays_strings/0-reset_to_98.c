include "main.h"
include <stdio.h>

/**
 *
 * main - takes a pointer to an int as parameter and updates the
 * value it points to to 98
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int *p;

	*p = &n;
	printf("n=%d\n", n);
	*p = 98;
	printf("n=%d\n", n);

	return (0);
}
