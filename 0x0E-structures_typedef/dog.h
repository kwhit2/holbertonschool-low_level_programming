#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct dog- Struct with name, age & owner.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Struct with name, age & owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* substitue for first line of struct to add: typedef struct dog */
/* substitue for last line of struct to add new typedef of: } dog_t; */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
