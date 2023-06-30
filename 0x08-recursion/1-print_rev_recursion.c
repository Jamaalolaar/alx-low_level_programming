#include "main.h"
#include <stdio.h>

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
/**
 *int _getlen(char *s)
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
		_print_rev_recursion(&(s[n-1]));
	}
}
*/
