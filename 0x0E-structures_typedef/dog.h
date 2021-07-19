#ifndef DOG_H
#define DOG_H

/**
* struct dog - data type
*@name: name name
*@age: years old
*@owner: pet owner
*/
struct dog
{
	float age;
	char *name;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
