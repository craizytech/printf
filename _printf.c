#include "main.h"

int _printf(const char *format, ...)
{
	int c;
	char *str;
	int n;

	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				_putchar(va_arg(args, int));
		}
		else
			_putchar(*format);
		format++;
	}
	va_end(args);

	return (0);
}
