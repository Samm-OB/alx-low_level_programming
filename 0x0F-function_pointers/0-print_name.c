/**
 * print_name - prints name as it is
 * @name: name of person
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
