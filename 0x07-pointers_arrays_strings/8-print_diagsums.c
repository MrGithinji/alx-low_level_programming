#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 *
 * @a: square matrix of integers
 * @size: columns & rows of a matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int x, sum1, sum2, diagonal1, diagonal2, row;

	x = 0, sum1 = 0, sum2 = 0, diagonal1 = 0, diagonal2 = 0, row = 0;
	while (x < size * size)
	{
		if (x == diagonal1 + (row * size))
			sum1 += a[x];
		if (x == (size - diagonal2 - 1) + (row * size))
			sum2 += a[x];
		if (((x + 1) % size) == 0)
			row++, diagonal1++, diagonal2++;
		x++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
