#include "main.h"

/**
 * print_b - prints the binary after the arg has been converted to binary
 * @args: argument to be converted to binary
 * Return: length of the binary
 */
int print_b(va_list args)
{
	int f = 0;
	int 1, a = 1, b;
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 -  i)) & n);
		if (p >> (32 - i))
			f = 1;
		if (f)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
