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
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
