#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name dog.
 * @age: age dog.
 * @owner: owner dog.
 * Return: pointer dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;

	s = malloc(sizeof(dog_t));
	if (s != NULL)
	{
		s->name = name;
		s->age = age;
		s->owner = owner;
		return (s);
	}
	return (NULL);
}
