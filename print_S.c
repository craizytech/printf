#include "main.h"

/**
 * print_S - prints a custom conversion specifier S corresponding to ..
 * a string 
 * @args: variadic arguments
 * Return: number of characters printed
 */
int print_S(va_list args)
{
	char *str;
	int i, len = 0;
	int t;

	str = var_arg(args, char *);
	if (str == null)
		s = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			t = str[i];
			if (t < 16)
			{
				_putchar('0');
				len++
			}
			len += print_HS(t);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
