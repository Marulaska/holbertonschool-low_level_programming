#include "main.h"

/**
  * print_last_digit - prints the last digit
  * @v: The number to
  *
  * Return: value the last digit
  */
int print_last_digit(int v)
{
	int last;

	last = v % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}

