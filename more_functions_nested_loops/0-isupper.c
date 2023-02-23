#include "main.h"
/**
 * _isupper - check the uppercase
 *return - 1 uppercase
 *return -0 otherwhise
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
