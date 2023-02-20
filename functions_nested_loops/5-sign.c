#include "main.h"

/**
  * print_sign - prints the sign
  * @v: the number
  *
  * Return: 1 num positive, -1 num negative or zero for other case.
  */
int print_sign(int v)
{
	if (v > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (v < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
