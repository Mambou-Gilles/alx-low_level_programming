#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>


/**
 * main - Entry point
 *
 *Description: 'Program that returns the last digit'
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;
	int number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	number = n % 10;
	/* your code goes there */

	if (number > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, number);
	if (number == 0)
		printf("Last digit of %d is %d and is 0\n", n, number);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, number);
	return (0);
}
