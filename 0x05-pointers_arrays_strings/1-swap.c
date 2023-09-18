#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: the first pointer to an integer
 * @b: the second pointer to an integer
 * Return: On success 0.
 */
void swap_int(int *a, int *b)
{
	int intermed = 0;

	intermed = *a;
	*a = *b;
	*b = intermed;
}
