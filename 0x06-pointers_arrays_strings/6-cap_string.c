#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words
 * @str: argument of function
 * Return: Capitalizes string
 */

char *cap_string(char *str)
{
	int a = 0;

	while (str[a++])
	{
		if (str[a - 1] == ' ' || str[a] == ','
		    || str[a] == ';' || str[a] == '.'
		    || str[a] == '!' || str[a] == '?'
		    || str[a] == '"' || str[a] == '('
		    || str[a] == ')' || str[a] == '{'
		    || str[a] == '}')
		{
			if (str[a] >= 'a' && str[a] <= 'z')
			{
				str[a] -= 32;
			}
		}
		else
			continue;
	}
	return (str);
}
