#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches string from bytes
 * @s: points to char
 * @accept: points to char
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
