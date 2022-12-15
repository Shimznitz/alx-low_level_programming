#include "main.h"
#include <stdlib.h>
/**
 * times_table
 * Returns: a void
 */
void times_table(void)
{
	int  b;

	for (b = 0; b <= 9; b++)
	{
		b *= 9;
		printf("%d, ", b);
	}
}
