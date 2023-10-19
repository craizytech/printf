#include "main.h"

/**
 * _printf - prints a formatted string
 * @formart: pointer to a constant string
 * @:...: variable number of argumets
 * Return: count(number of bytes printed to the screen)
 */

int _printf(const char *format, ...)
{
	char *str;
	int n;
	int count = 0;

	if (format == NULL)
		return (0);

	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				_putchar(va_arg(args, int));
			else if (*format == 'd')
			{
				n = va_arg(args, int);
				count = _printint(n, count);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				count = _printstr(str, count);
			}
		}
		else
			_putchar(*format);
		format++;
		count++;
	}
	count--;
	va_end(args);

	printf("\nmylength: %d", count);

	return (count);
}
