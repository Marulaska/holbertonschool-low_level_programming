#include "search_algos.h"

/**
 * print_array - prints array to STDOUT
 * @array: is a pointer to the first element of the array to search in
 * @inicio: first element
 * @fin: last element
 * Return: NULL.
 */
void print_array(int *array, int inicio, int fin)
{
	int i;

	printf("Searching in array: ");
	for (i = inicio; i <= fin; i++)
	{
		printf("%i", array[i]);
		if (i != fin)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search-searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @size: is the number of elements in array
 * Return: -1 if value si not present r is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int inicio = 0;
	int fin = size - 1;

	while (inicio <= fin)
	{
		int medio = inicio + (fin - inicio) / 2;

		print_array(array, inicio, fin);

		if (array[medio] == value)
		{
			return (medio);
		}
		else if (array[medio] < value)
		{
			inicio = medio + 1;
		}
		else
		{
			fin = medio - 1;
		}
	}

	return (-1);
}
