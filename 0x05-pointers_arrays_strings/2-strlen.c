#include "main.h"

/**
 * _strlen - function that return the length of a string.
 * @s: the first pointer to an integer
 * Return: On success 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
