#include "main.h"

/**
 * _isdigit -  function that checks for a digit
 * @c: int as argument of function
 * Return: positive (1), negative (0)
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
