#include <stdio.h>
/**
 * main - prints alphabets omitting p and q
 * Return: Always 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ++ch)
{
	if (ch != 'p' && ch != 'q')
		putchar(ch);
}
putchar('\n');

return (0);
}
