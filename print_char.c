#include "main.h"

/*
 * print_char - prints a charater in the variable arguments
 * @args: variable argument(keeps on changing)
 * Return: 1
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
