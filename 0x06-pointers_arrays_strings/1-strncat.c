#include "main.h"

/**
 * _strncat - concatenate two strings with length limit
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int p;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
	dest[m] = src[p];
	m++;
	p++;
	}
	dest[m] = '\0';
	return (dest);
}
