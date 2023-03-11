#include "main.h"
/**
 * print_triangle - print triangle with spaces and hashtag
 * @size: height of triangle.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x, y;

	for (y = 1; y <= size; y++)
	{
		for (x = size - 1; x >= 0; x--)
		{
			if (x >= y)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

