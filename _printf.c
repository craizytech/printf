#include "main.h"

/**
 * _printf - prints a formated string
 * @format: string
 * Return: length of the printed string
 */

int _printf(const char *format, ...)
{
	getmatch arr[] = {
		{"%c", print_char}, {"%s", print_str}, {"%%", print_37}, {"%d", print_d}, {"%i", print_i}, {"%r", print_r}, {"%R", print_r13}, {"%b", print_b},{"%ui", print_ui}, {"%o", print_o}, {"%x", print_h}, {"%X", print_H}, {"%S", print_S}, {"%p", print_p}
	};

	va_list args;
	int i = 0, len = 0, num;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
here:
	while (format[i] != '\0')
	{
		num = 13;
		while (num >= 0)
		{
			if (arr[num].id[0] == format[i] && arr[num].id[1] == format[i + 1])
			{
				len = len + arr[num].f(args);
				i += 2;
				goto here;
			}
			num--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
