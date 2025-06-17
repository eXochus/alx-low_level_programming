#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - just name and co
 * @name: the name
 * @age: the age
 * @owner: the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
#endif /* _DOG_H_ */
