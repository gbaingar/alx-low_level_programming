#include <stdio.h>

/**
 * main - Prints uppercase and lowercasw letters
 *
 * Return: Always 0.
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	printf("\n");
	return (0);
}
