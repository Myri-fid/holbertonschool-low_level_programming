#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - check the code
 *@d: initialise
 *@name: name
 *@age: age
 *@owner: owner
 * Description: initialise struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

