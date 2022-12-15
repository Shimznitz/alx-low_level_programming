#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * times_table
 * Returns: a void
 */
void times_table(void)
{
	int  b;
	char ch = '0';

	putchar(ch);
	for (b = 0; b <= 9; b++)
	{
		b *= 9;
		printf("%d, ", b);
		b = 10;
	}
	printf("\n");
}
