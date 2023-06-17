#include <stdio.h>

/**
 * main - Print all possible different
 *  combinations of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int two_digit;
	int one_digit;

	for (two_digit = 0; two_digit <= 9; two_digit++)
	{
		for (one_digit = two_digit + 1; one_digit <= 9; one_digit++)
		{
			putchar(two_digit + '0');
			putchar(one_digit + '0');
			if (two_digit < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
