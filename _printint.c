#include "main.h"

int _printint(int n, int count)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n / 10 != 0)
	{
		_printint(n / 10, count);
	}
	_putchar((n % 10) + '0');
	count++;
	return (count);
}
