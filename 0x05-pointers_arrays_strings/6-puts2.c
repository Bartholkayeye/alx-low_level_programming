#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every character in a string
 * @str: a pointer to an int
 * Return: Always 0
 */
void puts2(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
if (c % 2 == 0)
_putchar (str[c]);
}
_putchar ('\n');
}

