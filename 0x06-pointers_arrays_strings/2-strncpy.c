#include "main.h"

/**
 * _strncpy - Copy a string with length limit
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
