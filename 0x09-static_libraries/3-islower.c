#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the parameter value that will be checked
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
