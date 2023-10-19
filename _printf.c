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
	int c;
	int *ptr;
	int count = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	ptr = &count;


	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
			}
			else if (*format == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
			}
			else if (*format == 'd')
			{
				n = va_arg(args, int);
				*ptr = _printint(n, ptr);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					format++;
					continue;
				}
				*ptr = _printstr(str, ptr);
			}
			else
			{
				_putchar('%');
				_putchar(*format);
			}
		}
		else if (*format == '\\')
		{
			format++;
			if (*format == 'n')
				_putchar('\n');
			else 
				_putchar('\\');
			++*ptr;
		}
		else
			_putchar(*format);
		format++;
		++*ptr;
	}
	va_end(args);

	return (*ptr);
}
