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

typedef struct dog dog_t;

#endif
