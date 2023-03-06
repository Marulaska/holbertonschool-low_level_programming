#include "main.h"

/**
 * _strcpy - Return the copy of a given string.
 * @src: char source
 * @dest: char destination
 *
 * Return: null
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
