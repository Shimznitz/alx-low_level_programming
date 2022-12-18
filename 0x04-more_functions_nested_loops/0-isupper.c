#include "main.h"
/**
 * _isupper - Checks for upper case
 * @c: input character
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
