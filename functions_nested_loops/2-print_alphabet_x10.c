#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char v;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (v = 'a'; v <= 'z'; v++)
	{
		_putchar(v);
	}
	_putchar('\n');
	}
}

