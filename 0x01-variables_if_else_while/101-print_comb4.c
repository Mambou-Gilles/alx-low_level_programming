#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int ii;
	int iii;

	for (i = 0; i < 8; i++)
	{
		for (ii = i + 1; ii < 9; ii++)
		{
			for (iii = ii + 1; iii < 10; iii++)
			{
				putchar((i % 10) + '0');
				putchar((ii % 10) + '0');
				putchar((iii % 10) + '0');
				if (i == 7 && ii == 8 && iii == 9)
					continue;
				putchar(',');
				putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
