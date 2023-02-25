#include "main.h"
/**
 * _isupper - check the uppercase
 * @c : integer identifying the char value in the ASCII table.
 * Return: Always 0.
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
