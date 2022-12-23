#include <string.h>
/**
 * _strcat - contatenates two strings
 * @dest: destination
 * @src: source
 * Return: Returns a pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = strcat(dest, src);

	return (ptr);
}
