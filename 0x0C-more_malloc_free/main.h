#ifndef MYHEADERS_H
#define MYHEADERS_H

int add(int a, int b);
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int check(char *s);
int _strlen(char *s);
void errors(void);

#endif
