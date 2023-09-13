#include "main.h"

/**
 * _abs - Function to compute the absolute value of an integer.
 * @x: the input integer
 * Return: x if x is greater than zero and 0 if x is zero -1 otherwise
 */
int _abs(int x)
{
	if ((x > 0))
	{
		return (x);
	}
	if ((x == 0))
	{
		return (0);
	}
	else
	{
		return (-x);
	}
}
