#ifndef DOGGIE
#define DOGGIE
int _putchar(char c);

/**
 * struct dog - struct for doggie
 *
 * @name: name of good dog
 * @age: dogs are forever
 * @owner: dogs own the universe
 *
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
