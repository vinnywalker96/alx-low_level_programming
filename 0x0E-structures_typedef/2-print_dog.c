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
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d == NULL)
	{
		printf(" \n");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
