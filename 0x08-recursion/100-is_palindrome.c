#include "main.h"
#include <stdio.h>

/**
 * _strlen - gets string length.
 * @s: pointer to string
 * Return: string length.
 */

int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + (_strlen(s + 1)));
	}
	return (0);
}
/**
 * test - recursive functions through the string characters
 * recursion occurs from both the start and end of string and checks
 * characters are similar.
 * @s: string pointer
 * @i: forward recursion counter
 * @n: reverse recursion counter
 * Return: 1 positive, 0 negative
 */
int test(char *s, int i, int n)
{
	if (n >= i)
	{
		if (s[i] == s[n])
		{
			return (1 * test(s, (i + 1), (n - 1)));
		}
		return (0);
	}
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string pointer
 * Return: value from test
 */
int is_palindrome(char *s)
{
	int n = _strlen(s) - 1;
	int i = 0;

	return (test(s, i, n));
}
