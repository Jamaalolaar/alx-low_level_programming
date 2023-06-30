#include "main.h"
#include <stdio.h>

int _getlen(char *s)
{
	int n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return(n);
}


void _print_rev_recursion(char *s)
{
	int n = _getlen(s);

	if (n == 0)
	{
		_putchar(s[n]);
		return;
	}
	else
	{
		_putchar(s[n]);
		return (_print_rev_recursion(&(s[n-1])));
	}
}
