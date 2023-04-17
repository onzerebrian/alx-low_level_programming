#include "dog.h"

/**
 * init_dog- function name
 * @d: d
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog x;

	x.name = name;
	x.age = age;
	x.owner = owner;
}
