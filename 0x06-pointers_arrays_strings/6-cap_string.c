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
		while (!(str[a] >= 'a' && str[a] <= 'z'))
			a++;
		
		if (str[a] == ' ' || str[a] == ','
		    || str[a] == ';' || str[a] == '.'
		    || str[a] == '!' || str[a] == '?'
		    || str[a] == '"' || str[a] == '('
		    || str[a] == ')' || str[a] == '{'
		    || str[a] == '\t' || str[a] = '\n'
		    || str[a] == '}')
		{
				str[a + 1] -= 32;
		}
	}
	return (str);
}
