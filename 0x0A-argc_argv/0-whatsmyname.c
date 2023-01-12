#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: arrray containing command line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}

	return (0);
}
