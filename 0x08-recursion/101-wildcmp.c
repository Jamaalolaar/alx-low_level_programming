#include "main.h"
#include <stdio.h>
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			if (*s2 == '*')
				return (wildcmp (s1, (s2 + 1)));
			else
				return (0);
		}
		else if (*s1 == *s2)
			return (wildcmp ((s1 + 1), (s2 + 1)));
	}
	return (1);
}
