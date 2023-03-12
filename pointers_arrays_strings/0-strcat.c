#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, index = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	len++;

	while (src[index] != '\0')
	{
		dest[len + index] = src[index];
		index++;
	}
	dest[len + index] = '\0';

	return (dest);
}
