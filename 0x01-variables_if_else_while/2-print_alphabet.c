#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for ( alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

		putchar('\n');
		
	return (0);
}
