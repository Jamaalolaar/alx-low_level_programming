#include "main.h"
/**
 * _strlen - get the length of the string
 * @s: string
 * Return: n, length of string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * string_nconcat - to concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to be added from S2
 * Return: pointer to new string ptr
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, b, sum, i, j;
	char *ptr;

	a = _strlen(s1);
	b = _strlen(s2);
	if (s1 == NULL)
		S1 = "";
	if (s2 == NULL)
		S2 = "";
	if (n < 0)
		return (NULL);
	if (b > n)
		sum = a + n;
	else
		sum = a + b;
	ptr = (char *) malloc((sum + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; a++)
		ptr[i] = s1[i];
	for (j = 0; j <= n; j++)
	{
		if ((i + j) == sum)
			ptr[i + j] = '\0';
		else if ((i + j) < sum)
			ptr[i + j] = s2[j];
	}
	return (ptr);

}
