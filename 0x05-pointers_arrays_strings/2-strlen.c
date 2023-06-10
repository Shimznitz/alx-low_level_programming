#include "main.h"
#include <string.h>
/**
 * _strlen - len of string
 * @s: string in
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int count, i = 0;

	while (s[i] != NULL)
	{
		count++;
		i++;
	}

	return (count);
}
