#include<stdio.h>
/**
 * main - A program that shows the size of various types
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;
int t;
long n;
long long int g;
float f;

printf("Size of a char: %zu byte(s)\n", sizeof(c));
printf("Size of an int: %zu byte(s)\n", sizeof(t));
printf("Size of a long int: %zu byte(s)\n", sizeof(n));
printf("Size of a long long int: %zu byte(s)\n", sizeof(g));
printf("Size of a float: %zu bytes(s)", sizeof(f));

return (0);
}
