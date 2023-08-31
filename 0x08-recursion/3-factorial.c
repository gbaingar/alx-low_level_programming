#include "main.h"

/**
 * factorial - returns factorial of a number using recursion
 * @n: number to calculate the factorial of
 *
 * Return: factorial of n or -1 for negative numbers
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
