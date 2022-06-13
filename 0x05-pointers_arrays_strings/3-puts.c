#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
char *c;
int i;
c = str;
for (i = 0; c[i]; i++)
{
_putchar (c[i]);
}
_putchar ('\n');
}

