#include "main.h"
/**
 * _pow_recursion - return the value of x raised to power y
 * @x: integer
 * @y: number to which x will be powered to
 * Return: x to power y
 */
int _pow_recursion(int x, int y)
{
	int pw = 1;

	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	pw = _pow_recursion(x, y - 1);

	return (pw * x);
}
