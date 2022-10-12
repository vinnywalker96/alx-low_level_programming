#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - function that creates a new dog
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Name of owner
  *
  * Return: new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = (dog_t *)malloc(sizeof(dog_t *));

	if (mydog == NULL)
		return (NULL);

	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;


	return (mydog);


}
