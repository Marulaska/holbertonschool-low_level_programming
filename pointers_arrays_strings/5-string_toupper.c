#include "main.h"

/**
 * string_toupper - Return the copy of a given string.
 * @str: char source
 *
 * Return: null
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] = str[index] - 32;
		index++;
	}

	return (str);
}
