#include "main.h"
#include <stddef.h>
/**
 * _puts - function that prints a string followed by new line.
 * @str: the first pointer to an integer
 * Return: On success 0.
 */
void _puts(char *str)
{
	int i;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
