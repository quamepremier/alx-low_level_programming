#include "main.h"

/**
 * print_binary - Print binary equivalent of decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int w, count = 0;
	unsigned long int current;

	for (w = 63; w >= 0; w--)
	{
		current = n >> w;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
