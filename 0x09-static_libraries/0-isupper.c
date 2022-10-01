#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: int used as argument of function.
 * Return: positive (1), negative (0)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
