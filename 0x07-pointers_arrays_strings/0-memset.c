/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 *
 * @s: pointer to start of memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer to beginning of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;
	char *y = s;

	while (x < n)
	{
		*s++ = b;
		x++;
	}
	return (y);
}
