#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - a function that reverses a string
 * @s: argument of function.
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;
	char rev[strlen(s)] = s;
	a = 0;

	while (*(s + a) != 0)
	{
		str[a] = *(s + a);
		a++;
	}

	b = a - 1;
	i = 0;
	while (j >= 0)
	{
		*(s + j) = str[i];
		j--;
		i++;
	}
}
