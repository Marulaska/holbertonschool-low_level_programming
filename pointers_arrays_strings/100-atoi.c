#include "main.h"

/**
 * _atoi - Print the even positions of the char array.
 * @s: char index
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int index = 0, ret = 0, sign = 1;

	while (s[index] != '\0')
	{
		if (ret == 0 && s[index] == '-')
		{
			sign = sign * (-1);
		}
		if (s[index] >= '0' && s[index] <= '9')
		{
			if (ret == 0)
			{
				ret = s[index] - 48;
			}
			else
			{
				ret = 10 * ret + s[index] - 48;
			}
		}
		else if (ret != 0)
		{
			return (sign * ret);
		}

		index++;
	}
	return (sign * ret);
}
