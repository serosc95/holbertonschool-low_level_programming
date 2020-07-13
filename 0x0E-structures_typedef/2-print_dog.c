#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - prints a struct dog.
 * @d: pointer.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (d->age >= 0)
			printf("Name: %s\nAge: %1.6f\nOwner: %s\n", d->name, d->age, d->owner);
		else
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	}
}
