#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * task: to determine last digit
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{ /*if last digit greater than five*/
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{ /* else if last digit equals zero*/
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{ /*if previous condition arent satisfied*/
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
