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
	int i = 0, j;
	char *cp_name, *cp_owner;

	s = malloc(sizeof(dog_t));
	if (s != NULL)
	{
		while (name[i] != '\0')
			i++;
		cp_name = malloc((i + 1) * sizeof(char));
		i = 0;
		while (owner[i] != '\0')
			i++;
		cp_owner = malloc((i + 1) * sizeof(char));
		if (cp_name == NULL || cp_owner == NULL)
		{
			free(cp_name);
			free(cp_owner);
			free(s);
			return (NULL);
		}
		for (j = 0; j <= i; j++)
			cp_name[j] = name[j];
		for (j = 0; j <= i; j++)
			cp_owner[j] = owner[j];
		s->name = cp_name;
		s->age = age;
		s->owner = cp_owner;
		return (s);
	}
	return (NULL);
}
