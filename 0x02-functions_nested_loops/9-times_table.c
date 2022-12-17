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

	for (b = 0; b <= 9; b++)
	{
	if (b > 1)
	{
		b *= 9;
		printf("%d, ", b);
	}
	else
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
		for (i = b; )
	}
	printf("\n");
	}
}
