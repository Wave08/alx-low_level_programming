#ifdef HEADER_FILE
#define HEADER_FILE dog.h
/**
 * struct dog - Define a new struct dog with the name, age, owner
 * @name: name of the dog
 * @owner: owner of the dog
 */

struct dog

{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
