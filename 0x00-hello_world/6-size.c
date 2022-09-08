#include <stdio.h>

/**
 * main- entry point
 *
 * return: always success(0)
 */
int main(void)
{
	int s;
	char p;
	long int d;
	long long int f;
	float z;

	printf("Size of an int: %lu.\n", (unsigned long)sizeof(s));
	printf("Size of a char: %lu.\n", (unsigned long)sizeof(p));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(f));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(z));
	return (0);
}

