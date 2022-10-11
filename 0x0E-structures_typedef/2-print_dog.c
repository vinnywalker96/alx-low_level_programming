#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - functions that prints struct dog
  *@d: struct d
  *
  * Return: nothing
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		printf("(nil)\n");

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %6f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
