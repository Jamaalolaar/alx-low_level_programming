#include "main.h"
#include <stdio.h>

int _strlen(char *s, int i)
{
	if (*s != '\0')
	{
		_strlen((s + 1), (i + 1));
	}
	return (i);
}
int test(char *s, int i, int n)
{
	if (s[i] == s[n])
	{
		return (1);
	}
	else
		return (0);
	return (test(s, (i + 1), (n - 1)));
}

int is_palindrome(char *s)
{
	int n = _strlen(s);
	int i = 0;
	return (test(s, i, n));
}
	
	
	
