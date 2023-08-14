#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: dog
 */
void print_dog(struct dog *d)
{
	/*If null - print nothing*/
	if (d == NULL)
		return;
	/*If there isn't a name - print nil*/
	if (d->name == NULL)
		d->name = "(nil)";
	/*If there isn't an owner - print nil*/
	if (d->owner == NULL)
		d->owner = "(nil)";
	/*Print Format*/
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
