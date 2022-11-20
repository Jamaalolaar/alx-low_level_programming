#include "main.h"

/**
 * _islower - function checks if a lowercase letter is present
 *
 * Return: postive (1), negative (0)
 * @c: is the int that will be used for the argument of the function.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
		return (0);
}
