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
	while (*haystack != '\0' && *haystack != *needle)
	{
		haystack++;
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	haystack++;
	return (0);
}
