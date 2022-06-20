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
	int i, sum1 , sum2 = 0;

	for (i=0; i < size; i++) 
	{
		
		sum1 = a[(size + 1) * i];
		sum2 = a[(size - 1) * (b+1)];

		i++; 
	}

	printf("%d, %d\n", sum1, sum2);

}
