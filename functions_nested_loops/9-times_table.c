#include "main.h"

/**
 * putchar_number - auxiliary function
 * @i: number to be putcharified.
 *
 * Return: Always void.
 */
void putchar_number(int i)
{
	if (i == 0)
	{
		_putchar('0');
	}
	else if (i / 10 == 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(i + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
}

/**
 * times_table - function that prints times table
 *
 * Return: Always void.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			/* _putchar (i * j + '0'); */
			if (i != 0 || (i == 0 && j == 0))
				putchar_number(i * j);
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0');
			}
			if (j != 9)
				_putchar(',');
		}

		_putchar('\n');
	}
}
