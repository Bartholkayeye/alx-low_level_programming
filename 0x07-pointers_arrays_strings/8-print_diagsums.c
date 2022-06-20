#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonals .
 * @a: pointer to an array
 * @size: size of the matrix
 * Return: void
 */
	
void print_diagsums(int *a, int size)
{
	int  m;
	int j = size - 1;
	int diagright = 0;
	int diagleft = 0;

	for (m = 0; m < (size * size);
	     m = m + (size + 1), j = j + (size - 1))
	{
		diagleft += a[m];
		diagright += a[j];
	}
	printf("%i, %i\n", diagleft, diagright);
}
