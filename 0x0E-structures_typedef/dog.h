#ifndef DOH_H
#define DOH_H

/**
 * struct dog - creation of the struct
 * @name: name
 * @age: age
 * @owner: owner
 * dog_t - ilias dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
