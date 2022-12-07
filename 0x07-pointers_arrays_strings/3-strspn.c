#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix string
 * @s: first entry
 * @accept: second entry
 * Return: string length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int n = 0;
	unsigned int b = 0;

	for (; *(s + n); n++)
	{
		a = 0;
		for (; *(accept + a); a++)
		{
			if (*(s + n) == *(accept + a))
			{
				b++;
				break;
			}
		}
		if (*(accept + a) == '\0')
			break;
	}
	return (b);
}
