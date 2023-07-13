#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, sum_len;
	char *array;

	for (len1 = 0; s1[len1] != 0; len1++)
		len1++;
	for (len2 = 0; s2[len2] != 0; len2++)
		len2++;
	sum_len = len1 + len2;

	array = malloc((sizeof(char) * sum_len) + 1);
	if (array == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
	{
		s1 = "";

		for (i = 0; i < len2; len2++)
			array[i] = s2[i];
		array[len2] = '\0';
	}
	else if (s2 == NULL && s1 != NULL)
	{
		s2 = "";
		for (i = 0; i < len1; len1++)
			array[i] = s1[i];
		array[len1] = '\0';
	}
	else if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			array[i] = s1[i];
		}
		for (i = 0; i < sum_len; i++)
		{
			array[i + len1] = s2[i];
		}
	}
	return (array);
}
