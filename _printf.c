#include "main.h"

int _printf(const char *format, ...)
{
	int c;
	char *str;
	int n;
	int count = 0;

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
				_putchar(va_arg(args, int) + '0');
		}
		else
			_putchar(*format);
		format++;
		count++;
	}
	va_end(args);

	printf("\n%d", count);

	return (count);
}
