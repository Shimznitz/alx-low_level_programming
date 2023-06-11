#include "main.h"
#include <string.h>
/**
 * _strlen - len of string
 * @s: string in
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
