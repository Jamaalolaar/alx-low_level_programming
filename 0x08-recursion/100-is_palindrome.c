#include "main.h"
#include <stdio.h>

int test(char *a, char *b)
{
	if (*a == *b)
	{
		return (1);
	}
	else
		return (0);
	return (test((a + 1), (b + 1)));
}

int is_palindrome(char *s)
{
	char *a;
	char *b;

	a = s;
	is_palindrome(s + 1);
	b = s;
	return (test(a, b));
}
	
	
	
