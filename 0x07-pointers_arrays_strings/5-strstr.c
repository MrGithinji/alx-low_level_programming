/**
 * _strstr -  finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0)
 * are not compared
 *
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to start of needle
 * in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *occurance, *tempNeedle;

	if (!*needle) /* empty needle */
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle) /* first ch match */
		{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle) /* check if match */
			{
				if (*haystack++ != *tempNeedle++)
				{ /* not a match, reset pointer to first occurance */
					haystack = occurance;
					break;
				}
			}
			if (occurance != haystack) /* didn't reset, found match */
				return (occurance);
		}
		haystack++;
	}
	return (0);
}
