#include "main.h"

/**
 * print_sign - Function to print sign of numbers.
 * @n: the input integer
 * Return: 1 if n is greater than zero and 0 if n is zero -1 otherwise
 */
int print_sign(int n)
{
	if ((n > 0))
	{
		_putchar('+');
		return (1);
	}
	if ((n == 0))
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
