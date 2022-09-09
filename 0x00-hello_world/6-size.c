#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int s;
char p;
long int d;
long long int a;
float z;

printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(s));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(p));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}

