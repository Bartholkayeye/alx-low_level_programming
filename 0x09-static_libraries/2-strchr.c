#include <stdio.h>
/**
 * _strchr - locates a character in a string .
 * _strchr - finds a specific character in a string
 * @s:a string
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		s++;

			if (*s == c)
		{
			return (s);
		}


	}

		return (0);


}
