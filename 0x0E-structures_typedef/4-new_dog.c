#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This function creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
