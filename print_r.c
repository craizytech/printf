#include "main.h"

/**
 * print_r - prints a string in reverse
 * @args: variadic argument
 * Return: the length of the string
 */
int print_r(va_list args)
{
	char *str = va_arg(args, char *);
	int i, len = 0;

	if (str == NULL)
		str = "(null)";
	while (str)
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
	return (len);
}
