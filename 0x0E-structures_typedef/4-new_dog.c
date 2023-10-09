#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Createsa new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of new dog
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doge;
	int x, y, z;
	char *n, *o;

	doge = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);

	for (x = 0; name[x] != '\0'; x++)
		;
	for (y = 0; owner[y] != '\0'; y++)
		;

	n = malloc(sizeof(char) * x + 1);
	if (n == NULL)
	{
		free(doge);
		return (NULL);
	}
	o = malloc(sizeof(char) * y + 1);
	if (o == NULL)
	{
		free(n);
		free(doge);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		n[z] = name[x];
	for (z = 0; z <= y; z++)
		o[z] = owner[z];

	doge->name = n;
	doge->age = age;
	doge->owner = o;

	return (doge);
}
