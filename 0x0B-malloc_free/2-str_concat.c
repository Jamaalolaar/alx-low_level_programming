#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to conctenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, sum_len;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != 0; len1++)
		len1++;
	for (len2 = 0; s2[len2] != 0; len2++)
		len2++;
	sum_len = len1 + len2;

	array = malloc((sizeof(char) * sum_len) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i + len1 < sum_len; i++)
	{
		array[i + len1] = s2[i];
	}
	return (array);
}
