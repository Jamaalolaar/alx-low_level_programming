#include "main.h"

/**
 * _isalpha - function prints alphabets in uppecase
 * @c: is the argument of the function
 * Return: positive (1), negative (0).
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
