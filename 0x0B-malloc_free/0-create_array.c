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
	char *ptr; /*declaring the pointer to the character array created*/
	ptr = malloc(size * sizeof(char)); /*memory allocated using malloc*/

	return (ptr);
}
