#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int m = 0;

	for (; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}
