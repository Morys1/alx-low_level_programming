#include "main.h"

/**
 * _isalpha - Function to check for alphabetic character.
 * @c: the input character
 * Return: 1 if the character is lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((((c <= 122) & (c >= 97)) | ((c <= 90) & (c >= 65))))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
