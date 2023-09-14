#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: string
 * @age: float
 * @owner: string
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_cpy(char *dest, char *src);
int _strlen(char *str);
void free_dog(dog_t *d);

#endif