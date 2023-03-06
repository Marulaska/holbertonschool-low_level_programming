#include "main.h"
#include <stdio.h>

/**
 * print_array - check de length of the code
 *
 * @a: int* array of ints
 * @n: position
 *
 * Return: null
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%i", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
