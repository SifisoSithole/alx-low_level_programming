/**
 * init_dog - This functions inttialises the dog structure
 * @d: adress of the structure
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
