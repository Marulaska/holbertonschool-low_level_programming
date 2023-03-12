#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, index = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[index] != '\0' && index < n)
	{
		dest[len + index] = src[index];
		index++;
	}
	dest[len + index] = '\0';

	return (dest);
}
