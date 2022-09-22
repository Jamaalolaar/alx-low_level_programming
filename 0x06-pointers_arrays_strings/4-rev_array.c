#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the contenct of an array
 * @a: entry
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	char p;
	int b = n - 1;
	while (b >= i)
	{
		a[i] = p;
		a[i] = a[b];
		a[b] = p;
		i++;
		b--; 
	}
}
	
		
