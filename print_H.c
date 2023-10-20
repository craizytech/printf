#include "main.h"

/**
 * print_h - prints decimal digits in hexadecimal form
 * @args: variadic arguments
 * Return: the number of integers printed
 */

int print_h(va_list args)
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
	if (nums == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
	{
		nums[i] = temp % 16;
		temp /= 16;
	}
	reverse_array(nums, c);
	for (i = 0; i < c; i++)
	{
		if (nums[i] > 0)
			nums[i] += 39;
		_putchar(nums[i] + '0');
	}
	free(nums);
	return (c);
}
