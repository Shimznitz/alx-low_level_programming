#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to char
 * @b: init char
 * @n: init integer
 * Return: a pointer to a memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
