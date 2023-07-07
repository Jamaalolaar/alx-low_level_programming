#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int len, base = 1;

	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (b[len] != '0' && b[len] != '1')
		return (0);
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
