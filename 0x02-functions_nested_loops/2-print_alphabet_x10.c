#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_alphabet_x10 - prints lowercase letters 10 times
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
	putchar('\n');
	}
}
