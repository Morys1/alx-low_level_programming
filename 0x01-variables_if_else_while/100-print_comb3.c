#include <stdio.h>
/**
 * main - Entry point
 * i: The caracter to print
 * j: second counter
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = i + 1;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i < 9))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	return (0);
}
