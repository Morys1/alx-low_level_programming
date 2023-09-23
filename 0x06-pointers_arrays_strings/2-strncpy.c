#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strncpy - a function that copies a string.
 *
 * @src: the source string
 * @dest: the destination string
 * @n: number of bytes to use from src
 * Return: dest string
*/
#include <unistd.h>

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
