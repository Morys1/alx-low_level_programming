#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - a function that concatenates two strings.
 *
 * @src: the source string
 * @dest: the destination string
 *
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int j = strlen(src);

	if (dest == NULL || src == NULL)
	{
		return NULL;
	}
	char *destEnd = dest + j;
	while (*src != '\0')
	{
		*destEnd++ = *src++;
		*destEnd = '\0';
		return (dest);
	}
}
