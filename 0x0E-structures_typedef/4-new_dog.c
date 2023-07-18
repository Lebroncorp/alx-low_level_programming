#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.
 *
 * @name: char* type
 * @age: float type
 * @owner: char* type
 *
 * Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned long int n;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(strlen(name) + 1);
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
	for (n = 0; n < strlen(name) + 1; n++)
	{
		dog->name[n] = name[n];
	}
	dog->age = age;
	strcpy(dog->owner, owner);
	return (dog);
}
