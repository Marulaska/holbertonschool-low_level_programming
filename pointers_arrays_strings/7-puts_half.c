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
	char pos = s[index];

	while (pos != '\0')
	{
		sum = sum + 1;
		pos = s[++index];
	}

	half = (sum) / 2;

	for (index = half; index < sum ; index++)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
