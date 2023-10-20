#include "main.h"

/**
 * print_str - prints a sring refrenced to by a variadic argument
 * @args: the variable/argument to be printed
 * Return: the length of the string
 */

int print_str(va_list args)
{
	int n;
	char *s;
	int len;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (n = 0; n < len; n++)
			_putchar(s[n]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (n =0; n < len; n++)
			_putchar(s[n]);
		return (len);
	}
}
