#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @v: The character to be checked
  *
  * Return: 1 for alpha. char.  0 no char
  */
int _isalpha(int v)
{
	if ((v >= 65 && v <= 90) || (v >= 97 && v <= 122))
	{
		return (1);
	}

	return (0);
}

