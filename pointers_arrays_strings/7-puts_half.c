#include "main.h"

/**
 * puts_half - prints the second half of a string, rounde down.
 * @s: char index
 *
 * Return: null
 */
void puts_half(char *s)
{
	int index = 0, sum = 0, half = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	sum = index + 1;

	if (sum % 2 == 0)
	{
		half = sum / 2;
	}
	else
	{
		half = (sum - 1) / 2;
	}
	for (index = half; index < sum ; index++)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
