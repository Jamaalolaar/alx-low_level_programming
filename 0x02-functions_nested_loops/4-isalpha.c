#include "main.h"

/**
 * _isalpha - function that checks if a character is an alphabet
 *
 * @c: is the argument of the function
 * Return: positive (1), negative (0).
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
