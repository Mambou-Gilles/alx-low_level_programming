#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("%ld\n", n);
	return (0);
}
