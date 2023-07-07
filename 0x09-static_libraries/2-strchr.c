#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check
 * Return: If c is found - a pointer to the first occurence
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');

}
