#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Sum of the diagonals of a square matrix
 * @a: The pointer to the square matrix
 * @size: The size of the matrix
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int m, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 = sum1 + a[m * size + m];
	}

	for (m = size - 1; m >= 0; m--)
	{
		sum2 += a[m * size + (size - m - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
