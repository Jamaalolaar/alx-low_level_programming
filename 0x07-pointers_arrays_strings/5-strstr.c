#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: source nstring
 * @needle: substring to be searched
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	/**
	char *pt1, *pt2;

	while (*haystack != '\0')
	{
		pt1 = haystack;
		pt2 = needle;

		while (*haystack != *pt2 && *pt2 != '\0' && *haystack != '\0')
		{
			haystack++;
			pt2++;
		}
		if (*pt2 == '\0')
		{
			return (pt1);
		}
		haystack = pt1 + 1;
	}
	return (0);
	*/
	int a = 0, b = 0;
	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b] != '\0')
		{
			if (haystack[a] != needle[b])
			{
				break;
			}
			else
				return(&haystack[a - (b-1)]);
			b++;
		}
        
		a++;
	}
    
	return(NULL);
}
