#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - structure for a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name = 0;
	int len_owner = 0;
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	while (name[len_name] != '\0')
		len_name++;
	d->name = malloc(len_name + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
	{
		d->name[i] = name[i];
	}
	while (owner[len_owner] != '\0')
	{
		len_owner++;
	}
	d->owner = malloc(len_owner + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
	{
		d->owner[i] = owner[i];
	}
	d->age = age;
	return (d);
}
