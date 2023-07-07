#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int len, base = 1;

	n = 0;
	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
		{
			n += base;
		}
	}
	return (n);

}
