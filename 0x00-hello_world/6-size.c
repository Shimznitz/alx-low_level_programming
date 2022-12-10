#include <stdio.h>
/**
 * main - prints sizes of types
 * types include char, int, long int etc
 * returns 0
 */
int main(void)
{	
	char char1;
	int int1;
	long int longInt;
	long long int longLongInt;
	float float1;

	printf("Size of a char: %i byte(s)\n", sizeof(char1));
	printf("Size of an int: %i byte(s)\n", sizeof(int1));
	printf("Size of a long int: %i byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %i byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %i byte(s)\n", sizeof(float1));

	return (0);
}
