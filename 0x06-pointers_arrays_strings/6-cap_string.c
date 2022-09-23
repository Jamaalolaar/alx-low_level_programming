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
	int b = 0, i;
	char a[] = " \t\n,;.!?\"{}()";

	while(str(b))
	{
		if(str[b] >= 'a' && str[b] <= 'z')
		{
			if (i == 0)
			{
				str[b] -= 32;
			}
			else
			{
				for (i = 0; i <= 12; i++)
				{
					if (a[i] == str[b - 1])
					{
						str[b] -= 32;
					}
				}
			}
		}
		b++;
	}
	return (str);
}
