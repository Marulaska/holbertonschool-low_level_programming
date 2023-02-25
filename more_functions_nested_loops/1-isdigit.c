#include "main.h"

/**
 * _isdigit - used check whether a character is numeric character (0-9) or not.
 * @c: char
 * Return: 1 if c is a digit
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
