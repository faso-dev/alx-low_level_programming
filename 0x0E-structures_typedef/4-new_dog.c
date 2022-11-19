#include "dog.h"
#include "stdlib.h"

/**
* new_dog - creates a new dog struct
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, new_name, new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || !name || !owner)
	{
		free(new_dog);
		return (NULL);
	}

	for (new_name = 0 ; name[new_name] ; new_name++)
		;
	for (new_owner = 0 ; owner[new_owner] ; new_owner++)
		;

	new_dog->name = malloc(new_name + 1);
	new_dog->owner = malloc(new_owner + 1);

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0 ; i < new_name ; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;

	for (i = 0 ; i < new_owner ; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';
	return (new_dog);
}
