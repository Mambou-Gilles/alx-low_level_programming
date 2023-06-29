#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string
 * @src: string
 * Return: pointer to resulting `dest`
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
