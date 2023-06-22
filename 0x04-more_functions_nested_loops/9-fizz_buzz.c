#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * multiples of three print Fizz instead of the number
 * multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz\t");
		else if (i % 3 == 0)
			printf("Fizz\t");
		else if (i % 5 == 0)
			printf("Buzz\t");
		else
			printf("%d\t", i);
	}
	printf("\n");
	return (0);
}
