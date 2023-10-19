#include "main.h"

int _printf(const char *format, ...)
{
	while (*format)
	{
		if (*format == "%")
		{
			formart++;
			fshandler(char *formart);
		}
		_putchar(*format);
		format++;
	}
	return (0);
}
