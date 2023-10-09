#include "dog.h"
#include <stdlib.h>

/*
 * init_dog - initializes a dog structure
 *
 * @d: pointer to the struct of the dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * This function initializes the members of a dog structure with the provided
 * values for name, age, and owner. It expects a valid pointer to a struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
/* Handle the case where d is NULL */
return;
}

d->name = name;
d->age = age;
d->owner = owner;
}

