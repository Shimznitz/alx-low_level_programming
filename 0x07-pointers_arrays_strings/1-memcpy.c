#include "main.h"
/**
 * _memcpy - cpoies memory area
 * @dest: point to destination
 * @src: points to source
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
