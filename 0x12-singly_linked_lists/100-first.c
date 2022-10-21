#include <stdlib.h>
#include <stdio.h>
void __attribute__((constructor)) tortue(void);

/**
 * hare - prints a string before the execution of main function
 * Return: void
 */
void tortue(void)
{
	printf("You're beat! and yet, you moust allow,");
	printf("\nI bore my house upon my back!\n");
}
