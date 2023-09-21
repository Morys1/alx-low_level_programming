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
	int i;
	int j = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		src[i + j] = dest[i];
	}
	src[i + j] = '\0';
	return (dest);
}
