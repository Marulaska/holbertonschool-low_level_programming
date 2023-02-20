#include "main.h"

/**
  * _abs - absolute value of an integer
  * @v: number (n)
  *
  * Return: absolute value or 0
  */
int _abs(int v)
{
	if (v < 0)
	{
		int abs_val;

		abs_val = v * -1;

		return (abs_val);
	}

	return (v);
}
