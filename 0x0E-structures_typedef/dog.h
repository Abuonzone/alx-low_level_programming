#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure of a dog
 * @name: First member
 * @age: Second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif /* DOG_H */
