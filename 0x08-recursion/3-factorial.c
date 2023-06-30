#include "main.h"
#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
