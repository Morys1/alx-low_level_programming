#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	double e;

	printf("Size of a char %d: ", sizeof(a)" bytes(s)");
	printf("Size of an int %d: ", sizeof(b)" bytes(s)");
	printf("Size of a long int %d: ", sizeof(c)" bytes(s)");
	printf("Size of a long long int %d: ", sizeof(d)" bytes(s)");
	printf("Size of a float %d: ", sizeof(e)" bytes(s)");
}
