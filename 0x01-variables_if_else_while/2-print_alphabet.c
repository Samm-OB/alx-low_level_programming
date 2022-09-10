#include <stdio.h>
/**main - Entry  point
 * to list all alphabets
 *
 * Return: always success 0
 */
int main(void)
{
	char alpha;
	for (alpha = "a"; alpha <= "z"; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
