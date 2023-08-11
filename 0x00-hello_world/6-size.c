#include<stdio.h>
/**
 * main - A program that uses the printf function
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

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(t));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("size of a float: %lu bytes(s)", (unsigned long)sizeof(f));
return (0);
}
