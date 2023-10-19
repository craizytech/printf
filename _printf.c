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
				_putchar(va_arg(args, int));
			else if (*format == 'd')
			{
				n = va_arg(args, int);
				*ptr = _printint(n, ptr);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				*ptr = _printstr(str, ptr);
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

	/*printf("\nmylength: %d", count);*/

	return (*ptr);
}
