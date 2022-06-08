#include "main.h"
#include <unistd.h>

/**
* main - Prints _putchar
*
* Return: 0
*/

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
