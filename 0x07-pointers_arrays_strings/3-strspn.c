#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix string
 * @s: first entry
 * @accept: second entry
 * return: string length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int n = 0;

	if (s[a] != '\0' && s[a] != ',')
	{
		while (f)
		{
			while (s)
			{
				if (*f == *s)
				{
					n++;
				}
				++s;
			}
			++f;
		}
		return (n);
	}
}
