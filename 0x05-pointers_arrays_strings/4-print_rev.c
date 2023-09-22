#include "main.h"
#include <stddef.h>
/**
 * print_rev - function that prints a string, in reverse.
 * @s: the pointer 
 * Return: On success 0.
 */
void print_rev(char *s)
{
	int i;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; --i)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
