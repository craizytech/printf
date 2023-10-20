#include "main.h"

/**
 * print_p - prints the pointer variable
 * @args: variadic arguments
 * Return: length
 */
int print_p(va_list args)
{
	void *ptr;
	char *n = "(nill)";
	int i, len;
	long int p;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	p = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	len = print_int_hex(p);
	return (len + 2);
}
