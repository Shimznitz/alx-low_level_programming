#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains elements of a dogs identity
 * @name: member string name
 * @age: int of age
 * @owner: memeber with char owner
 * Description - a normal description
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

#endif /*DOG_H*/
