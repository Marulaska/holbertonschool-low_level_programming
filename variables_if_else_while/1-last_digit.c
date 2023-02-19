#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = abs(n) % 10;
	printf("Last digit of %i is %i", n, lastdigit);
	if (lastdigit > 5)
	{
		printf(" and is greater than 5");
	}
	if (lastdigit == 0)
	{
		printf(" and is 0");
	}
	else if (lastdigit < 6)
	{
		printf(" and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
