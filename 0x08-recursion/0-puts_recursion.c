/**
 * _puts_recursion - prints char
 * @s: character
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s != '\0')
		_putchar(s);
		_puts_recursion(s);
	else
		_putchar('\n');
}
