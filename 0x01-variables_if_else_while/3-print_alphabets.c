#include <stdio.h>
/**
 * main - prints alphabets from a-Z
 * Return - Always 0
 */
int main(void)
{
	char ch;
	char CH;

	for(ch = 'a'; ch <= 'z'; ++ch)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; ++CH)
		PUTCHAR(CH);
	putchar('\n');

	return (0);
}
