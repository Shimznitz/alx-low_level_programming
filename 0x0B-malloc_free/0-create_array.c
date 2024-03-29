#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - prints buffer in hexa
 * @size: size of array
 * @c: character
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char)); /*memory allocated using malloc*/
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
