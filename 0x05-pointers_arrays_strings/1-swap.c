#include <stdio>

/**
 * swap_int - Swap the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function ththat swaps the values of two integers. */
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
