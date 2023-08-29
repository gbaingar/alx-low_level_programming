#include "main.h"
/**
 * _strstr - Locates a substring within a string
 * @haystack: the string to search
 * @needle: the substring to search for
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *p = needle;

		while (*m == *p && *p != '\0')
		{
			m++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
