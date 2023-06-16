#include <stdio.h>

/**
 * main - printing the alphabets in lower and upper
 * Return: Always 0 (Success)
 */

int main(void)
{

	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
