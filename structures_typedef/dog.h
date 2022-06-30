#ifndef DOG_H
#define DOG_H

/**
 * struct dog - woof
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: keeping track of dogs
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
