#include "main.h"

/**
 * _strlen - check de length of the code
 * @s: char index
 *
 * Return: length of the code
 */
int _strlen(char *s)
{
	int index = 0, sum = 0;
	char pos = s[index];

	while (pos != '\0')
	{
		sum = sum + 1;
		pos = s[++index];
	}
	return (sum);
}
