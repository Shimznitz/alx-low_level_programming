#include "main.h"
/**
 * _strstr - function
 * @haystack: pointer to character
 * @needle: another pointer to character
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *tneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = tneedle;
		result++;
		haystack = result;
	}
	return (0);
}
