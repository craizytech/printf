#include "main.h"

/**
 * print_r13 - encrypts an input
 * @args: variadic argument
 * Return: length
 */
int print_r13(va_list args)
{
	int i, j, len = 0, k = 0;
	char *str = va_arg(args, char *);
	char alphabet[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13key[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; alphabet[j] && !k; j++)
		{
			if (str[i] == alphabet[j])
			{
				_putchar(rot13key[j]);
				len++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
