#include "main.h"

/**
 * reverse_array - Reverse an array of integers
 * @a: Array to be reversed
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int p;

	for (m = 0; m < n--; m++)
	{
		p = a[m];
		a[m] = a[n];
		a[n] = p;
	}
}
