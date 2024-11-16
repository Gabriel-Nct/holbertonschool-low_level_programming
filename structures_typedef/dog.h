#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Un nouveau type describant un chien.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le propriétaire du chien.
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
#endif
