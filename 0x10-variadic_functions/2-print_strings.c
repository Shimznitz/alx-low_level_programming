/**
 * print_strings - check the code
 * @separator: char
 * @n: integer n.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int i;
	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(p, const char*));

		if (separator && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
