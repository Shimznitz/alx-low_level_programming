#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints _putchar
 * Return: Always 0
 */
int main(void)
{
	char ch[8] = "_putchar"; /*_putschar array */
	int i; /* iterator */

	for (i = 0; i <= 8; ++i)
		putchar(ch[i]);
	putchar('\n');
	fprintf(stderr, "");
	return (0);
}
