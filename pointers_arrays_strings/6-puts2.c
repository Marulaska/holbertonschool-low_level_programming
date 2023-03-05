#include "main.h"

/**
 * puts2 - Print the even positions of the char array.
 * @s: char index
 *
 * Return: null
 */
void puts2(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(s[index]);
		}
		index++;
	}
	_putchar ('\n');
}
