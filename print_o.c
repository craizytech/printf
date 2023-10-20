#include "main.h"

/**
 * print_o - prints decimal numbers in octal
 * @args: variadic arguments
 * Returns: number of digits
 */

int print_o(va_list args)
{
	int i, c = 0;
	unsigned int n = va_arg(args, unsigned int);
	int *nums;
	unsigned int temp = n;

	/* check if number is div by 8 */
	while (n / 8 != 0)
	{
		n = n / 8;
		c++;
	}
	c++;

	nums = malloc(sizeof(int) * c);

	for (i = 0; < c; i++)
	{
		nums[i] = temp % 8;
		temp /= 8;
	}
	reverse_array(nums, c);

	for (i = 0; i < c; i++)
		_putchar(nums[i] + '0');
	free(nums);
	return (c);
}
