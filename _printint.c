#include "main.h"

int _printint(int n, int *ptr)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		++*ptr;
	}
	if (n / 10 != 0)
	{
		++*ptr;
		_printint(n / 10, ptr);
	}
	_putchar((n % 10) + '0');

	return (*ptr);
}
