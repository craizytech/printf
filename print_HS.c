#include "main.h"

/**
 * print_HS - prints decimal digits in hexadecimal form(UPPERCASE) for S
 * @n: integer to be converted to hex for the unprintable chars in ascii
 * Return: the number of integers printed
 */

int print_HS(unsigned int n)
{
	int i, c = 0;
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
		if (nums[i] > 9)
			nums[i] += 7;
		_putchar(nums[i] + '0');
	}
	free(nums);
	return (c);
}
