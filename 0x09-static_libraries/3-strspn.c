#include <stdio.h>

/**
 * _strspn -  gets the length of a prefix substring
 * @s: character to print
 * @accept: character
 * Return: The number of bytes in s which
 */
unsigned int _strspn(char *s, char *accept)
{
int a, b;
int count = 0;

a = 0;
while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (accept[b] == s[a])
{
count++;
break;
}
b++;
}
if (s[a] != accept[b])
{
break;
}
a++;
}
return (count);
}
