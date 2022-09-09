#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{	/*if n is negative print n is negative*/
		printf("%u is zero\n", n); 

	} else if (n > 0)
	{	/*if n is positive print n is positive*/
		printf("%d is positive\n", (n));
	} else
	{	/*onl happens if the prvious conditions dont happen*/
		printf("%u is negative\n", n);
	}

	return (0);
}
