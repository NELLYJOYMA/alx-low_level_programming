#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - the new dog structure whose variable is to
 *initialized
 * @d: pointer to the struct of the dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
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

