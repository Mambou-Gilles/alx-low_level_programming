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

	for (iii = '0'; iii <= '9'; iii++)
	{
		for (ii = '0'; ii <= '9'; ii++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (!((i == ii) || (ii == iii) || (ii > i) || (iii > ii)))
				{
					putchar(iii);
					putchar(ii);
					putchar(i);
					if (!(i == '9' && iii == '7' && i == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
