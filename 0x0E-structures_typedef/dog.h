#ifndef MYDOG_STRUCTURE
#define MYDOG_STRUCTURE
/**
 * struct dog - creates a dog \"class\"
 * @name: pointer to the name of the dog string
 * @age: age of the dog
 * @owner: pointer to the owner string
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
