#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concatenates two strings
 *
 * @src: string 1
 * @dest: string 2
 * @n: n or more bytes in a string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src);
	printf("%s", dest);

	return(0);	
}
