#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the number
 * @n: input
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%i, ", i);
	}
	else
		for (i = n; i > 98; i--)
			printf("%i, ", i);
	printf("%i\n", i);
}
