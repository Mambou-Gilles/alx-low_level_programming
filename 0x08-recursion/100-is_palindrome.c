#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * _comparator -  function that compares characters
 * @str: the string
 * @nlen: length of string
 * @n: counter of recursion
 * Return: 1 if palindrome, 0 if not.
 */
int _comparator(char *str, int nlen, int n)
{
	if (n >= nlen)
		return (1);
	if (str[nlen] == str[n])
		return (_comparator(str, nlen - 1, n + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int nlen = _strlen_recursion(s);
	int n = 0;

	return (_comparator(s, nlen - 1, n));
}
