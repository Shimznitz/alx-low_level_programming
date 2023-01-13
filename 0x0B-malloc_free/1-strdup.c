#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a poinere to a string
 * @str: pointer
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t i;

	ptr = malloc(strlen(str) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (!str)
	{
		return (NULL);
	}
	for (i = 0; i < (strlen(str) + 2); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
