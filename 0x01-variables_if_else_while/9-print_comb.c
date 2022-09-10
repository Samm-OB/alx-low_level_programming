#include <stdio.h>

/**
 * main - Entry point
 * combination of single numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int no;

	for (no = '0' ; no <= '9' ; no++)
	{
		putchar(no);
		if (no != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
