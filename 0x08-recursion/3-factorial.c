#include "main.h"
/**
 * factorial- finds the factorial of  a given number
 * @n: integer
 * Return: factorial of number or -1 f n is lower than zero
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
