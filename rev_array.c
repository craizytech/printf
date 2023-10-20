#include "main.h"

/**
 * reverse_array - reverses an array of integers with n elements
 * @n: number of elements
 * @a: array of integers
 */
void reverse_array(int *a, int n)
{
	int tmp, index;


	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
