#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: char index
 *
 * Return: null
 */
void print_rev(char *s)
{
	int index = 0, i;

	while (s[index] != '\0')
	{
		index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
}
