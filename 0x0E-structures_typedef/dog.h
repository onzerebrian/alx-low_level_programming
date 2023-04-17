#ifndef DOH_H
#define DOH_H

/**
 * struct dog - creation of the struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
