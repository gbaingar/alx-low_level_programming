#include<stdio.h>
/**
 * main - A program that uses the printf function
 *
 * Return: 0 (Success)
 */
int main(void)
{
long long int g;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("size of a float: %lu bytes(s)", (unsigned long)sizeof(float));
return (0);
}
