#include "main.h"

/**
 * _islower - Function to check for lowercase character.
 * @c: the input character
 * Return: 1 if the character is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if ((c <= 122) & (c >= 97))
        {
		return (1);
	}
	else
	{
		return (0);
	}
}
