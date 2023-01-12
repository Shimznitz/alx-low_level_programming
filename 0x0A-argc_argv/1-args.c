#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arg
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
