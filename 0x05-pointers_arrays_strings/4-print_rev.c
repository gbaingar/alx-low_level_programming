#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lngth = 0;
	int m;

	while (*s != '\0')
	{
		lngth++;
		s++;
	}
	s--;
	for (m = lngth; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
