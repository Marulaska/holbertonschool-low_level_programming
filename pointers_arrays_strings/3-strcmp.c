#include "main.h"
/**
 * _strcmp - compare two strings.
 * @s1: input
 * @s2: input2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] == s2[index])
	{
		if (s1[index] == ('\0') && s2[index] == ('\0'))
			return (0);
		++index;
	}
	return (s1[index] - s2[index]);
}
