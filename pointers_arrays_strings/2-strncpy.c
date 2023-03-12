#include "main.h"

/**
 * _strncpy - Return the copy of a given string.
 * @src: char source
 * @dest: char destination
 * @n: int length
 *
 * Return: null
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
