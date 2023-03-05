#include "main.h"

/**
 * _puts - check de length of the code
 * @s: char index
 *
 * Return: null
 */
void _puts(char *s)
{
	int index = 0;
	char pos = s[index];

	while (pos != '\0')
	{
		_putchar(s[index]);
		pos = s[++index];
	}
	_putchar('\n');
}
