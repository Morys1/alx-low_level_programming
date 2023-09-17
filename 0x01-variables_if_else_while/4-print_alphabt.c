#include <stdio.h>
/**
 * main - Entry point
 * c: The caracter to print
 * Return: always 0 (Success)
 */
int main(void)
{	
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if ((letter != 'q') && (letter != 'e'))
		{
		putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
