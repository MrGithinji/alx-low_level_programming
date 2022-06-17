#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses an arry
 *
 * @a: the array to be reversed
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;

	while (a[i])
	{
		_putchar(a[i]);
		i--;
	}
}
