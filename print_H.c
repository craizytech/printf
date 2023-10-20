#include "main.h"

/**
 * print_H - prints decimal digits in hexadecimal form(UPPERCASE)
 * @args: variadic arguments
 * Return: the number of integers printed
 */

int print_H(va_list args)
{
	int i, c = 0;
	unsigned int n = va_arg(args, unsigned int);
	unsigned int temp = n;
	int *nums;

	/* check if already divisible by 16 */
	while (n / 16 != 0)
	{
		n /= 16;
		c++;
	}
	c++;
	nums = malloc(sizeof(int) * c);

	for (i = 0; i < c; i++)
	{
		nums[i] = temp % 16;
		temp /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (nums[i] > 9)
			nums[i] += 7;
		_putchar(nums[i] + '0');
	}
	free(nums);
	return (c);
}
