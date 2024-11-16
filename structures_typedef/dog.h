#ifndef DOG_H
#define DOG_H
/**
 *struct dog - check the code
 *@name: name
 *@age: age
 *@owner: owner
 *Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
