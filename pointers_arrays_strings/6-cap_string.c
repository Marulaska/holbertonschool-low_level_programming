#include "main.h"

/**
 * is_sep - Return wether the given char is a separator.
 * @c: char source
 *
 * Return: true if char is separator; false otherwise.
 */
int is_sep(char c)
{
	int i;
	char sep[] = " \t\n,;.?\"(){}";

	for (i = 0 ; i < 13; i++)
	{
		if (sep[i] == c)
			return (0);
	}
	return (1);
}

/**
 * cap_string - Return the copy of a given string.
 * @str: char source
 *
 * Return: null
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (((index == 0) || (is_sep(str[index - 1]) == 0))
		&& ((str[index] >= 'a') && (str[index] <= 'z')))
			str[index] = str[index] - 32;
		index++;
	}

	return (str);
}
