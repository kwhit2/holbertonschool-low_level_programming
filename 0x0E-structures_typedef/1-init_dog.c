#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* init_dog- Function that initialize a variable of type struct dog
* @d: pointer char
* @name: pointer char
* @age: float
* @owner: pointer char
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
