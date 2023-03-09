#include "main.h"
/**
 * print_line - check the code
 *@n: the number of times the character _ should be printed
 * Return: Always void.
 */
void print_line(int n)
{
	int i;

	for (i = n ; i > 0 ; i--)
	{
		_putchar(95);

	}
	_putchar('\n');
}
