#include"dog.h"
/**
 * init_dog - prints a string.
 * @d: pointer.
 * @name: name dog.
 * @age: age dog.
 * @owner: owner dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
