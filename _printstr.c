#include "main.h"

int _printstr(char *str, int *ptr)
{
	if (str == NULL)
	{
		_printf("Error");
		printf("\n");
	}

	while (*str)
	{
		_putchar(*str);
		++*ptr;
		str++;
	}
	return (*ptr);
}
