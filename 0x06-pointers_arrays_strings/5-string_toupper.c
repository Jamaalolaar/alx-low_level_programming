#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - converts all lowercase letters to uppercase
 * @str: argument of function.
 * Return: uppercase string.
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a++])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] -= 32;
		}
	}
	return (str);
}
