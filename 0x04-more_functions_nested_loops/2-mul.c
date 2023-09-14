#include "main.h"
#include <stdio.h>

/**
 * mul - function that multiplies two integers.
 * @a: The first parameter
 * @b: The second parameter
 * Return: Always 0.
 */
int mul(int a, int b)
{
	int result = 0;
	int i;

	for (i = 0; i < b; i++)
	{
		result += a;
	}

	return (result);
}
