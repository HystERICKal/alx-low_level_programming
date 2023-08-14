#include <stdlib.h>
#include "dog.h"
/**
 * *cpy_str - helper func
 * @fin: where to copy string
 * @wrd: string
 * Return: points to where string is copied
 */
char *cpy_str(char *fin, char *wrd)
{
	int len = 0, x = 0;

	for (; wrd[len] != '\0'; len++)
	{
		continue;
	}

	while (x < len)
	{
		fin[x] = wrd[x];
		x++;
	}
	fin[x] = '\0';
	return (fin);
}
/**
 * LOS - Length Of String checker
 * @c: string
 * Return: how long the string is
 */
int LOS(char *c)
{
	int x = 0;

	for (; c[x] != '\0'; x++)
	{
		continue;
	}

	return (x);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = LOS(name), len2 = LOS(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	cpy_str(dog->name, name);
	cpy_str(dog->owner, owner);
	dog->age = age;
	return (dog);
}
