#include "main.h"
#include <time.h>
#include <stdio.h>

/**
* main - Prints _putchar
*
* Return: 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
