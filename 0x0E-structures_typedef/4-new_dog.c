#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _length - gets length of string
 * @s: string
 * Return: string length
 */
int _length(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * _strcpy - copies a string src to another string dest
 * @dest: first entry
 * @src: second entry
 * Return: dest
 */
char _strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (length(name) + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
