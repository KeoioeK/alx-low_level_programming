#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - checks if number is 0, negative, or positive
 *
 *Return: returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n >= 0)
	{
		if (n == 0)
		{
			printf("is zero");
		}
		else
		{
			printf("is positive");
		}
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
