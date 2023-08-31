#include "main.h"

int check_pal(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Recursively checks characters for palindrome
 * @s: the string to check
 * @start: start index of current comparison
 * @end: end index of current comparison
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
		return (0);
	if (start >= end)
		return (1);
	return (check_pal(s, start + 1, end - 1));
}
