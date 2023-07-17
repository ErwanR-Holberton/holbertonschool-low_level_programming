/**
 * print_name - print a name
 * @name: address of the name string
 * @f: function to print the name
 *
 * Return: NOTHING
 */
void print_name(char *name, void (*f)(char *));
{
	f(name);
}
