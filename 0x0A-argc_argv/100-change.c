#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds multiple numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
    /* Check if the number of arguments passed is exactly 2 */
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    /* Convert the input parameter to an integer using atoi */
    int cents = atoi(argv[1]);
    /* Check if the input parameter is negative */
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }
    /* Calculate the number of coins required */
    int num_quarters = cents / 25;
    cents -= num_quarters * 25;
    int num_dimes = cents / 10;
    cents -= num_dimes * 10;
    int num_nickels = cents / 5;
    cents -= num_nickels * 5;
    int num_twos = cents / 2;
    cents -= num_twos * 2;
    int num_ones = cents;
    /* Print the number of coins required */
  printf("%d\n", num_quarters + num_dimes + num_nickels + num_twos + num_ones);
    return 0;
}
