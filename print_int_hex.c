#include "main.h"

/**
 * print_int_hex - prints decimal digit in hexadecimal form
 * @n: converts integer to hexadecimal (used in print_p.c)
 * Return: the number of integers printed
 */

int print_int_hex(unsigned long int n)
{
	long int i, c = 0;
	unsigned long int temp = n;
	long int *nums;

	/* check if already divisible by 16 */
	while (n / 16 != 0)
	{
		n /= 16;
		c++;
	}
	c++;
	nums = malloc(sizeof(long int) * c);

	for (i = 0; i < c; i++)
	{
		nums[i] = temp % 16;
		temp /= 16;
	}

	for (i = c - 1; i >= c; i--)
	{
		if (nums[i] > 9)
			nums[i] += 39;
		_putchar(nums[i] + '0');
	}
	free(nums);
	return (c);
}
