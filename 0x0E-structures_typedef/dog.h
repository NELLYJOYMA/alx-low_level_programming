#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct creating a dog information
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The dog's owner
 * Return: Always 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
