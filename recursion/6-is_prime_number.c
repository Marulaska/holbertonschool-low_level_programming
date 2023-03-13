#include "main.h"

/**
 * prime_aux - returns prime(n)
 * @n: main function input number
 * @p: iterator
 * Return: prime(n)
 */
int prime_aux(int n, int p)
{
	if (n == p)
		return (1);
	if (n % p == 0)
		return (0);

	return (prime_aux(n, p + 1));
}
/**
 * is_prime_number - returns if prime(n)
 * @n: input number
 * Return: prime(n)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_aux(n, 2));
}
