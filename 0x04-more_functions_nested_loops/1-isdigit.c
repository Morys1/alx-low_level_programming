#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for digit.
 *
 * @c: Initial value
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
