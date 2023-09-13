#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alphab;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)
		{
			_putchar(alphab);
		}
			_putchar('\n');
	}
}
