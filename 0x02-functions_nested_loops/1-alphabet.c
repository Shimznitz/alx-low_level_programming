#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
