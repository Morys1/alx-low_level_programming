#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main- Entry point: the function starts here */
int main(void) /* main - the entry point*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
