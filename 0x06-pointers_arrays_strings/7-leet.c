#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - encodes a string to 1337
 * @s: string to encode
 * Return: address of str
 */

char *leet(char *str)
{
	int a, b;
	char x[] = "aeotlAEOTL";
	char y[] = "4307143071";

	for (a = 0; s[a]; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (x[b] == *(str + a))
				*(str + a) = y[b];
		}
	}
	return (str);
}
