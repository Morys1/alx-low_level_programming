#include <stdio.h>
/**
 * main - Entry point
 * c: The caracter to print
 * Return: always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
