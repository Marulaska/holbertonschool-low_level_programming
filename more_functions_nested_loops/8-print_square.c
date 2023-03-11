#include "main.h"
/**
 * print_square - this function prints square of chars.
 * @size: input
 * Return: void.
 */
void print_square(int size)
{
	int x = 0, y = 0;

	while (y < size)
	{
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		x = 0;
		y++;
	}
}
