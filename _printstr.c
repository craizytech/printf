#include "main.h"

int _printstr(char *str, int count)
{
	if (str == NULL)
	{
		_printf("Error");
		printf("\n");
	}

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
}
