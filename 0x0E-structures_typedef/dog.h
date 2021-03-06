#ifndef DOG_H
#define DOG_H

/**
* struct dog - data type
*@name: name name
*@age: years old
*@owner: pet owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
