#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - just name and co
 * @name: the name
 * @age: the age
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* _DOG_H_ */
