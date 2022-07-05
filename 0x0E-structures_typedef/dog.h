#ifndef DOG_H
#define Dog_H

/**
 * struct dog - Structure containig dogs details
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog owner
 *
 * Decription: This structurcontains dogs information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
