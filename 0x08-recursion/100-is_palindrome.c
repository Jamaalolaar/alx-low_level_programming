#include "main.h"
#include <stdio.h>
/**
 * _getlength - gets the length of the string
 * @s: string
 * @n: string index; string length is the
 * index of the last character
 * Return: value of n
 */
int _getlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + (_getlength(s + 1)));
}
/**
 * _revstr - compares characters to check if they
 * are the same as in a palindrome
 * @s: string
 * @a: forward counter
 * @b: backward counter
 * Return: 1 if positive, 0 if negative
 */
int _revstr(char *s, int a, int b)
{
	if (s[a] != s[b])
		return (0);
	if (s[a] == s[b])
		return (_revstr(s, (a + 1), (b - 1)));
	return (1);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: return value of _revstr
 */
int is_palindrome(char *s)
{
	int n = _getlength(s) - 1;

	return (_revstr(s, 0, n));
}
