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

	if (!str)
	{
		return (NULL);
	}
	ptr = malloc((strlen(str) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
