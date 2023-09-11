#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
/**
 * *_cpy - copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_cpy(char *dest, char *src)
{
int length, i;
length = 0;
while (src[length] != '\0')
{
length++;
}
for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int length1, length2;
length1 = _strlen(name);
length2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (length1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (length2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_cpy(dog->name, name);
_cpy(dog->owner, owner);
dog->age = age;
return (dog);
}
