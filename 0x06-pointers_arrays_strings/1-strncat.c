#include <string.h>
/**
 * _strncat - concantenats strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: a pointer to a char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = strncat(dest, src, n);

	return (ptr);
}
