#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the string containing characters to search for
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int m;

		while (*s)
		{
			for (m = 0; accept[m]; m++)
			{
			if (*s == accept[m])
			return (s);
			}
		s++;
		}

	return ('\0');
}
