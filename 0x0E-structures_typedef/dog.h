#ifndef DOG_H
#define DOG_H


/**
  * struct dog - Typedef struct of dog_t
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner
  *
  * Description: typedef struct dog_t
  */


struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - Typedef of struct dog
  */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
