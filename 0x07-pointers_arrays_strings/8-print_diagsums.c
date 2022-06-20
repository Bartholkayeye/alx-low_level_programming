#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonals .
 * @a: pointer to an array
 * @size: size of the matrix
 * Return: void
 */
	
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		sl += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		s2 += a[i];
	}

	printf("%d, %d\n", s1, s2);
}
