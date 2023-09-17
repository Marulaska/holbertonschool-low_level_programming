#include "search_algos.h"
/**
 * linear_search-searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @size: is the number of elements in array
 * Return: -1 if value si not present r is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}


	return (-1);
}
