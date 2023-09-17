#include <stdio.h>
/**
 * main - Entry point
 * c: The caracter to print
 * Return: always 0 (Success)
 */
int main(void)
{
	int c = 0;

	for (c = 0; c <= 9; ++c)
	{
		putchar('0' + c);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
