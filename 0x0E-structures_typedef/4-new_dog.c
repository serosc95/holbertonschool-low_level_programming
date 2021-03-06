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
	int i, len1 = 0, len2 = 0;
	char *cp_name, *cp_owner;

	s = malloc(sizeof(dog_t));
	if (s != NULL)
	{
		while (name[len1] != '\0')
			len1++;
		while (owner[len2] != '\0')
			len2++;
		cp_name = malloc((len1 + 1) * sizeof(char));
		cp_owner = malloc((len2 + 1) * sizeof(char));
		if (cp_name == NULL || cp_owner == NULL)
		{
			free(cp_name);
			free(cp_owner);
			free(s);
			return (NULL);
		}
		for (i = 0; i <= len1; i++)
			cp_name[i] = name[i];
		for (i = 0; i <= len2; i++)
			cp_owner[i] = owner[i];
		s->name = cp_name;
		s->age = age;
		s->owner = cp_owner;
		return (s);
	}
	return (NULL);
}
