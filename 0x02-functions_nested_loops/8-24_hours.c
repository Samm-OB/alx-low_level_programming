#include "main.h"

/**
 * jack_bauer - prints every hours minute of the day
 * Return: 0(success)
 */

void jack_bauer(void)
{
	int hrs;
	int mins;
	int hrs_rem;
	int mins_rem;

	while (hrs < 24)
	{
	while (mins < 59)
	{
	hrs_rem = hrs % 10;
	_putchar(hrs / 10 + '0');
	_putchar(hrs_rem + '0');
	_putchar(':');
	_putchar(mins / 10 + '0');
	_putchar(mins_rem + '0');
	mins++;
	_putchar('\n');
	}
	hrs++;
	mins = 0;
}
}
