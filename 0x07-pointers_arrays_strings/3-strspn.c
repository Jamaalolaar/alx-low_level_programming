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

	while (*(s + n))
	{
		while (*(accept + a))
		{
			if (*(s + n) == *(accept + a))
			{
				break;
			}
			a++;
		}
		if (*(accept + a) == '\0')
			break;
		n++;
	}
	return (n);

}
