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
	va_end(args);

	printf("\n%d", count);

	return (count);
}
