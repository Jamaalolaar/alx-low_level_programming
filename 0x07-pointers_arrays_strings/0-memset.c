#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer that points to the character array
 * @b: byte to be filled in memory
 * @n: number of memory locations that te byte will be filled into.
 * return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = '0x01';
	}
	return (s);
}
