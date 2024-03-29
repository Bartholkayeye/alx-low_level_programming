#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string
 * @s: a pointer to a string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		putchar(*s);
		count--;
	}
	putchar('\n');
}
