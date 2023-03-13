#include "main.h"

/**
 * sqrt_aux - returns sqrt(n)
 * @high: input number
 * @low: input number
 * Return: sqrt(n)
 */
int sqrt_aux(int high, int low)
{
	if (low * low == high)
		return (low);
	if (low * low > high)
		return (-1);

	return (sqrt_aux(high, low + 1));
}
/**
 * _sqrt_recursion - returns sqrt(n)
 * @n: input number
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	return (sqrt_aux(n, 1));
}
