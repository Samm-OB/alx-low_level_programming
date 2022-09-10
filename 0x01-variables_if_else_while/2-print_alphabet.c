#include <stdio.h>
/**main - Entry  point
 * to list all alphabets
 *
 * Return: always success 0
 */
int main()
{
	char ch;
	for (ch = "a"; ch <= "z"; ch++)
	{
		putchar("%c\n", ch);
	}
	return (0);
}
