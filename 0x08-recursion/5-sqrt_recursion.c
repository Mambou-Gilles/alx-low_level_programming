#include "main.h"

/**
 * square_root - returns the natural square root of a number.
 * @n: input number.
 * @m: iterator.
 * Return: square root or -1.
 */

int square_root(int n, int m)
{
	if (n * n == m)
		return (n);
	if (n * n > m)
		return (-1);
	return (square_root(n + 1, m));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	return (square_root(1, n));
}
