#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: argument of function.
 * Return: integer
 */

int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *tmp;

	tmp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*tmp == '-')
			sign *= -1;
		tmp++;
	}
	if (*tmp != '\0')
	{
		do {
			num = num * 10 + (*tmp - '0');
			temp++;
		} while (*tmp >= '0' && *tmp <= '9');
	}
	return (num * sign);
}
