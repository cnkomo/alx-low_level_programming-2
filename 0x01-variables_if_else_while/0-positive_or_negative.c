#include <stdlib.h>
#include <time.h>

/**
 * main-Prints if number is positive,zero or negative
 *
 * Return: Always (Success)
 */
 int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_Max / 2;

	if (n > 0)
	{
		printf("is positive\n", n);
	}
	else if (n == 0)
	{
		printf("is zero\n", n);
	}
	else
	{
		printf("is negative\n", n);
	}

	return (0)
}
