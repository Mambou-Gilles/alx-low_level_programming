#include "main.h"
/**
  * _prime - checks recursively the input from is_prime_number
  * @n: iterator
  * @m: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int _prime(int n, int m)
{
	if (m % n == 0 || m < 2)
		return (0);
	else if (n == m - 1)
		return (1);
	else if (m > n)
		return (_prime(n + 1, m));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
{
	return (_prime(2, n));
}
