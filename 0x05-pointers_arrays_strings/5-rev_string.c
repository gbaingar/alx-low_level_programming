#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int countr = 0;
	int n;

	while (s[countr] != '\0')
	countr++;
	for (n = 0; n < countr; n++)
	{
		countr--;
		rev = s[n];
		s[n] = s[countr];
		s[countr] = rev;
	}
}
