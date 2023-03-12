#include "main.h"

/**
 * toleet - turn char into leet
 * @c: input char
 *
 * Return: Always char
 */
char toleet(char c)
{
	char matrix[10][2] = {
		"a4", "A4", "e3", "E3", "o0",
		"O0", "t7", "T7", "l1", "L1"
	};
	int i;

	for (i = 0; i < 10; i++)
	{
		if (matrix[i][0] == c)
			return (matrix[i][1]);
	}
	return (c);
}

/**
 * leet - change letters for numbers
 * @str: input
 * Return: Always 0.
 */
char *leet(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		str[index] = toleet(str[index]);
		index++;
	}

	return (str);
}

