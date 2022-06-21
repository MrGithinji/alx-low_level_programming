/**
 * _memcpy -  copies n bytes from memory area src to
 * memory area dest
 *
 * @dest: pointer to dest str
 * @src: source to be copied from
 * @n: num bytes to copy from src
 *
 * Return: pointer to beginning of memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	char *y = dest;

	while (x < n)
	{
		*dest++ = *src++;
		x++;
	}
	return (y);
}
