#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: The buffer storing the string copy
 *@src: The source string.
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
