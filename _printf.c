#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == "%")
		{
			format++;
			fshandler(char *format, va_arg(args, char);
		}
		_putchar(*format);
		format++;
	}
	va_end(args);

	return (0);
}
