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

#endif /*DOG_H*/
