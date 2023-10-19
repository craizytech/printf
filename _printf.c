#include "main.h"

int _printf(const char *format, ...)
{
	char *c;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			c = va_arg(args, char);
			format++;
			fshandler(char *format, c);
		}
		_putchar(*format);
		format++;
	}
	va_end(args);

	return (0);
}
