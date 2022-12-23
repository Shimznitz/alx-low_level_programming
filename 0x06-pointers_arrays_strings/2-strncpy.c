#include <string.h>
/**
 * strncpy - copy 1 string to another
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: a char string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pttr = strncpy(dest, src, n);

	return (pttr);
}
